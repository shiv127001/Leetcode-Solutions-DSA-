/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* ptr;
        ListNode* temp;
        ListNode* temp1;
        temp = node;
        temp1 = temp;
        node = node->next;
        while(node!=NULL)
        {
            temp->val = node->val;
            temp1 = temp;
            temp = temp->next;
            node = node->next;
        }
        // node = temp;
        temp1->next = NULL;
        
    }
};