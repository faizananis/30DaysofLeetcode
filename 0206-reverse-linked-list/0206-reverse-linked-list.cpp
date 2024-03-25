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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=NULL;
        ListNode *tempNext=head;
        ListNode *tempPrev=NULL;
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return head;
        }
        while(tempNext!=NULL)
        {
            tempPrev=temp;
            temp=tempNext;
            tempNext=temp->next;
            temp->next=tempPrev;
        }
        return temp;
    }
};