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
    void deleteNode(ListNode* node) 
    {
        ListNode* x=node;
        while(x->next!=nullptr)
        {
            x->val=x->next->val;
            if(x->next->next==nullptr){x->next=nullptr;break;}
            x=x->next;
        }
    }
};