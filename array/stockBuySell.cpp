  vector<vector<int> > stockBuySell(vector<int> A, int n)
    {
        vector<vector<int>> v;
       for(int i=1;i<n;i++)
       {
           if(A[i-1]<A[i])
           {
               v.push_back({i-1,i});
           } 
       }
        return v;
    }