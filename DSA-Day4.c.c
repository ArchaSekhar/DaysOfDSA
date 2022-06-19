struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
  struct ListNode *temp = head;
  struct ListNode *cur = head;
  struct ListNode *pre = NULL;
  if(head == NULL)
  {
    return head;
  }
  int c=0;
  while(temp != NULL)
  {
    c=c+1;
    temp = temp->next;
  }
  c=c-n;
  if(c==0)
    return head->next;
  while(c>0)
  {
    pre=cur;
    cur=cur->next;
    c=c-1;
  }
  pre->next = cur->next;
  cur->next = NULL;
  free(cur);
  return head;
}