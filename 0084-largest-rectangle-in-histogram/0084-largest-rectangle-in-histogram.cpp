#include <vector>
#include <stack>
#include <algorithm>

class Solution {
public:
    int largestRectangleArea(std::vector<int>& heights) {
        int n = heights.size();
        std::vector<int> left(n), right(n);
        std::stack<int> s;

        // Calculate the next smaller element on the left
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            left[i] = s.empty() ? 0 : s.top() + 1;
            s.push(i);
        }

        // Clear the stack for the next iteration
        while (!s.empty()) {
            s.pop();
        }

        // Calculate the next smaller element on the right
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            right[i] = s.empty() ? n - 1 : s.top() - 1;
            s.push(i);
        }

        int ans = 0;
        for (int i = 0; i < n; ++i) {
            ans = std::max(ans, (right[i] - left[i] + 1) * heights[i]);
        }

        return ans;
    }
};
