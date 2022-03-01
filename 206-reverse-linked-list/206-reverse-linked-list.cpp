class Solution {
public:
ListNode* reverseList(ListNode* head) {
if(head==NULL or head->next==NULL)
return head;
ListNode* curr=head->next;
ListNode* next=curr->next;
ListNode* prev=head;
head->next=NULL;
while(curr!=NULL)
{
curr->next=prev;
prev=curr;
curr=next;
if(next!=NULL)
next=next->next;
}
return prev;
}
};