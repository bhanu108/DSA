 int getlength(Node* head)
    {
        int len=0;
        while(head!=NULL)
        {
            len++;
            head=head->next;
        }
        return len;
    }
    Node* reversal(Node* head)
    {
        Node*next=NULL;
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
          // vector<int> ans;
          int len=getlength(head);
          if(len>=n){
         Node* temp=  reversal(head);
           int count=1;
           while(count!=n)
           {
              temp=temp->next;
              count++;
           }
          return temp->data;
          }
          else{
              return -1;
          }
    }