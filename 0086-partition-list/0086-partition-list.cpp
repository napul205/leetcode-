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
    ListNode* partition(ListNode* head, int x) {
        ListNode before(0),after(0);
        
        ListNode* bc=&before;
        ListNode* ac=&after;
        
        while(head)
        {
            if(head->val<x)
            {
                bc->next=head;
                bc=head;
            }
            else
            {
                ac->next=head;
                ac=head;
            }
            head=head->next;
        }
        ac->next=nullptr;
        bc->next=after.next;
        
        return before.next;
    }
};