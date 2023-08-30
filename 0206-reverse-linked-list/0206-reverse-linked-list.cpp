/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *h;
    
    void solve(ListNode* head,ListNode* pre)
    {
        if(head)
        {
            solve(head->next,head);
            head->next=pre;
        }
        else
            h=pre;
    }
    ListNode* reverseList(ListNode* head) {
        solve(head,NULL);
        
        return h;
    }
};