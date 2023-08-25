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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode *odd=head;
        ListNode *e=head->next;
        ListNode *eh=e;
        
        while(e!=NULL && e->next!=NULL)
        {
            odd->next=e->next;
            odd=odd->next;
            e->next=odd->next;
            e=e->next;
        }
        
        odd->next=eh;
        return head;
    }
};