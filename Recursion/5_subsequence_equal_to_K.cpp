#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    void Printf(int ind,vector<int> &v,int s,int sum,int arr[],int n){
        if(ind==n){
            if(s==sum){
                for(auto it: v){
                cout<<it<<" ";
            }
             cout<<endl;
            }
            return;
        }
        v.push_back(arr[ind]);
        s += arr[ind];
        Printf(ind+1,v,s,sum,arr,n);
        v.pop_back();
        s -= arr[ind];
        Printf(ind+1,v,s,sum,arr,n);
        }
        
    int main()
        {
        int arr[]={1,2,1};
        int n=3;
        int sum=2;
        vector<int> v;
        Printf(0, v, 0, sum, arr, n);
    return 0;
}
