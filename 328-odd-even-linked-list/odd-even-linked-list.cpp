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
        // // // Brute Force Solution (using extra space)
        // ListNode* oddhead = new ListNode(0);
        // ListNode* evenhead = new ListNode(0);
        // ListNode* oddTail = oddhead;
        // ListNode* evenTail = evenhead;
        // ListNode* curr = head;
        // int i=0;
        // while(curr!=NULL)
        // {
        //     if(i%2 == 0)
        //     {
        //         evenTail->next = new ListNode(curr->val);
        //         evenTail = evenTail->next;
        //     }
            
        //     if(i%2 == 1)
        //     {
        //         oddTail->next = new ListNode(curr->val);
        //         oddTail = oddTail->next;
        //     }
        //     i++;
        //     curr = curr->next;
        // }
        // evenTail->next = oddhead->next;
        // return evenhead->next;

        // // Optimal Solution (In-place, O(1) extra space)
        if (!head || !head->next) return head;
        ListNode* even = head;
        ListNode* odd = head->next;
        ListNode* oddHead = odd;

        while(odd && odd->next)
        {
            even->next = odd->next;
            even=even->next;

            odd->next = even->next;
            odd = odd->next;
        }
        even->next = oddHead;
        return head;
    }
};