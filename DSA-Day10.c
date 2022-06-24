struct ListNode* swapNodes(struct ListNode* head, int k)
{
    struct ListNode *temp = head;
    struct ListNode *pt1 = head;
    struct ListNode *pt2 = head;
    int m,n;
    for(int i=1;i<=k;i++)
    {
        if(i==k)
        {
            m=temp->val;
            pt1=temp;
            break;
        }
        temp=temp->next;
    }
    pt2=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        pt2=pt2->next;
    } 
    n=pt2->val;
    pt2->val=m;
    pt1->val=n;
    return head;
}