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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr)
        {
            return head;
        }
        ListNode* h1=head;;
        ListNode* h2=head->next;
        ListNode* hh=h2;
        ListNode* temp=head;
        int c=0;
        while(temp!=nullptr)
        {
            c++;
            temp=temp->next;
        }
        if(c%2==1)
        {
            c=c/2;
            for(int i=0;i<c;i++)
            {
                h1->next=h2->next;
                h1=h1->next;
                h2->next=h1->next;
                h2=h2->next;
            }
            h1->next=hh;
        }
        else
        {
            c=c/2;
            for(int i=0;i<c-1;i++)
            {
                h1->next=h2->next;
                h1=h1->next;
                h2->next=h1->next;
                h2=h2->next;
            }
            h1->next=hh;
            
        }
        return head;
        
    }
};