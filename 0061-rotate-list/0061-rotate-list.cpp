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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) {
        return head;
    }
    
    // Find the length of the linked list
    int length = 1;
    ListNode* current = head;
    while (current->next) {
        current = current->next;
        length++;
    }
    
    // Calculate effective rotation value
    int effective_k = k % length;
    
    if (effective_k == 0) {
        return head;
    }
    
    // Find the (length - effective_k)th node
    current = head;
    for (int i = 0; i < length - effective_k - 1; ++i) {
        current = current->next;
    }
    
    // Update pointers to rotate the list
    ListNode* new_head = current->next;
    current->next = nullptr;
    
    // Traverse to the end and connect it to the original head
    ListNode* temp = new_head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = head;
    
    return new_head;
        
        
    }
};