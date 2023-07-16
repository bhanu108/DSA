vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    for(int i=0;i<1;i++)
    {
        int first,j;
        first=arr[0];
        for( j=0;j<arr.size()-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=first;
    }
    return arr;
}
