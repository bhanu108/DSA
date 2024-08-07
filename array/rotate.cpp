#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> rotateArray(vector<int>& arr, int k) {
    // Write your code here.
    for(int i=0;i<k;i++)
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

int main()
{
    int k,n;
    cin>>n>>k;
    vector<int> arr[n];
    for(int i=0;i<n;i++)
    {
        std::cin :: arr[i];
    }
    //cin>>k;
    vector<int> x=rotateArray(arr,k);
    return x;
}