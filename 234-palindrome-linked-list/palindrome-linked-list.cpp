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
    bool isPalindrome(ListNode* head)
    {
        if(head==nullptr || head->next==nullptr || (head->next->next==nullptr && head->val== head->next->val)){return true;}
        ListNode* temp=head;
        vector<int> v;
        while(temp!=nullptr)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        int c=n/2;
        int i=0;
        while(c>0)
        {
            if(v[i++]!=v[--n]){return false;}
            c--;
        }
        return true;
        // ListNode* temp=head;
        // ListNode* slow=head;
        // ListNode* fast=head;
        // while(fast->next!=nullptr && fast->next->next!=nullptr)
        // {
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // ListNode t1
        // slow=slow->next;
        // while(slow!=nullptr)
        // {
        //     if(temp->val != slow->val ){return false;}
        //     temp=temp->next;
        //     slow=slow->next;
        // }
        // return true;

        
    }
};