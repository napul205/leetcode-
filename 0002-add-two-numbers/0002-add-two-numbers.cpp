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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode();
        ListNode* du=temp;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry)
        {
            int t=0;
            if(l1!=NULL)
            {
                t+=l1->val;
                l1=l1->next;
            }
            
            if( l2!=NULL)
            {
                t+=l2->val;
                l2=l2->next;
            }
           
            t+=carry;
                carry=t/10;
                t=t%10;
            
            ListNode *nap= new ListNode(t);
           du->next=nap;
            du=du->next;
        }
       
        return temp->next;
    }
};