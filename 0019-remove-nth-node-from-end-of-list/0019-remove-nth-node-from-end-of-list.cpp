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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *last=NULL;
        ListNode *prevTemp=NULL;
        ListNode *temp=NULL;
        int pos=0;
        int i=0;
        if(head->next==NULL)
        {
            delete head;
            return NULL;
        }
        last=head;
        for(i=0;last!=NULL;i++)
        {
            last=last->next;
        }
        pos=i-n+1;
        temp=head;
        if(pos==1)
        {
            head=head->next;
            temp->next=NULL;
            delete temp;
            return head;
        }
        for(i=1;i<pos;i++)
        {
            prevTemp=temp;
            temp=temp->next;
        }
        prevTemp->next=temp->next;
        temp->next=NULL;
        delete temp;
        return head;
    }
};