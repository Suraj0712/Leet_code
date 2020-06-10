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
    int getDecimalValue(ListNode* head) 
    {
        auto temp = head;
        int ret_var =0;
        int val =0;
        while(temp!=NULL)
        {
            val= temp->val;
            ret_var = (ret_var)*2 + val * 1;
            temp = temp->next;
        }
        return ret_var;
    }
};

