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
    bool isPalindrome(ListNode* head) {
        vector<int> temp;
        ListNode* ptr = head;
        while(ptr!=NULL)
        {
            temp.push_back(ptr->val);
            ptr = ptr->next;
        }
        int l = temp.size();
        int n=l-1;
        if(l==1)
        {return true;}
        int i = 0;
        while(temp[i]==temp[n] && i<=n)
        {
            i+=1;
            n-=1;
        }
        if(i>=n)
        {
            return true;
        }
        else{return false;}

    }
};