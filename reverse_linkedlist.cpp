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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* cur=head;ListNode* prev=NULL;ListNode* nxt=NULL;
        
        while(cur!=NULL)
        {
            nxt = cur->next;
            cur->next = prev;
            prev =cur;
            cur =nxt;
        }
        head = prev;
        
        return head;
        
    }
};
