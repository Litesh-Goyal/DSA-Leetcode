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
        if(head==nullptr){return false;}
        if(head->next==nullptr){return true;}
        // vector<int> v;
        // ListNode* temp=head;
        // while(temp!=nullptr)
        // {
        //     v.push_back(temp->val);
        //     temp=temp->next;
        // }
        // for(int i=0;i<v.size()/2;i++)
        // {
        //     if(v[i]!=v[v.size() -i -1]){return false;}
        // }
        // return true;
        ListNode* temp1=head;
        ListNode* temp2=head;
        while(temp2->next!=nullptr && temp2->next->next!=nullptr)
        {
            temp1=temp1->next;
            temp2=temp2->next->next;
        }
        int c=0;
        
        temp1=temp1->next;
        temp2=temp1;
        temp1=nullptr;
        while(temp2!=nullptr)
        {
            ListNode* nextnode=temp2->next;
            temp2->next=temp1;
            temp1=temp2;
            temp2=nextnode;
            // if(c==0)
            // {
            //     temp1=new ListNode(temp2->val);
            //     c++;
            // }
            // else
            // {
            //     temp1=new ListNode(temp2->val,temp1);
            // }
            // temp2=temp2->next;
        }
        temp2=head;
        while(temp1!=nullptr)
        {
            if(temp2->val != temp1->val){return false;}
            temp2=temp2->next;
            temp1=temp1->next;
        }
        return true;

    }
};