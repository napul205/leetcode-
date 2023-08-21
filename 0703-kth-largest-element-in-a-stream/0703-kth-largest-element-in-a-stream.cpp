class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq; // Min-heap
    int k;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int num : nums) {
            pq.push(num);
            if (pq.size() > k) {
                pq.pop(); // Remove the smallest element if size exceeds k
            }
        }
    }

    int add(int val) {
        pq.push(val);
        if (pq.size() > k) {
            pq.pop(); // Remove the smallest element if size exceeds k
        }
        return pq.top(); // The kth largest element is always at the top of the heap
    }
};
