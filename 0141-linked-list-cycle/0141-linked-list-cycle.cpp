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
    bool hasCycle(ListNode *head) {
        ListNode *slow=NULL;
        ListNode *fast=NULL;
        if(head==NULL)
        {
            return false;
        }
        if(head->next==NULL)
        {
            return false;
        }
        slow=head;
        fast=head;
        while(slow!=NULL&&fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
    }
};