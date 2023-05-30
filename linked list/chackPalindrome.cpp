//Check palindrome of linked list
bool checkpalindrome(vector<int>arr)
{
     int n=arr.size();
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(arr[s]!=arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
    
}
bool ispalindrome(Node* head)
{
    vector<int>arr;
    Node* temp=head;
    while(temp!=NULL)
    {
        arr.push_back(temp->data);
        temp=temp->next;
    }
    return checkpalindrome(arr);
}


