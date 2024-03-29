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
    void reorderList(ListNode* head) {
        if(head->next==NULL||head->next->next==NULL)
        {
            return;
        }
        ListNode *start=head;
        ListNode *temp=head;
        stack<ListNode*> st;
        while(temp!=NULL)
        {
            st.push(temp);
            temp=temp->next;
        }
        while(start!=st.top()&&start->next!=st.top())
        {
            temp=start;
            start=start->next;
            st.top()->next=start;
            temp->next=st.top();
            st.pop();
            st.top()->next=NULL;
            temp=temp->next;
        }
    }
};