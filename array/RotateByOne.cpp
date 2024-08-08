 void rotate(vector<int> &arr) {
        // code here
        if(arr.empty())
        {
            return; 
        }
        int last  = arr.back();
        for(int i = arr.size();i>0;i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = last;
    }