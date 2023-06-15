class solution{
    private:
    public:
    void solve(string digit,string output,int index,vector<int>& ans,string mapping[])
    {
        //base case
        if(index>= digit.length())
        {
            ans.push_back(output);
            return;
        }
        int number=digit[index]-'0';    //find number
        string value=mapping[number];   //find values link with that number

        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(digit,output,index+1,ans,mapping);
            output.pop_back();
        }
    }
    vector<string> lettercombinations(string digit)
    {
        vector<string>ans;
        string output;
        int index =0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,mapping);
        return ans;
    }
}