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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp=NULL;
        ListNode *t=NULL;
        ListNode *t1=NULL;

        if(list1==NULL&&list2==NULL)
        {
            return NULL;
        }
        else if(list1==NULL)
        {
            return list2;
        }
        else if(list2==NULL)
        {
            return list1;
        }
        while(list2!=NULL)
        {
            temp=new ListNode(list2->val);
            if(list1->val>=list2->val)
            {
                temp->next=list1;
                list1=temp;
            }
            else
            {
                t=list1;
                while(t->next!=NULL&&t->next->val<list2->val)
                {
                    t=t->next;
                }
                t1=t->next;
                t->next=temp;
                temp->next=t1;
            }
            list2=list2->next;
        }
        return list1;
    }
};