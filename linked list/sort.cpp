//sort a linked list 
Node* p1=head;
Node* p2=NULL:
int temp;
while(p1!=NULL)
{
    p2=p1->next;
    while(p2!=NULL)
    {
        if(p1->data > p2->data)
        {
            temp=p1->data;
            p1->data=p2->data;          // swapping
            p2->data=temp;
            
        }
        p2=p2->next;
    }
    p1=p1->next;
    
}
