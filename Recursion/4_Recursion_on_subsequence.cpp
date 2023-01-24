#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    void Printf(int ind,int n,int arr[],vector<int> &v){
        if(ind==n){
            for(auto it: v){
                cout<<it<<" ";
            }
            if(v.size()==0){
                 cout<<"{ }";
            }
            cout<<endl;
            return;
        }
        v.push_back(arr[ind]);
        Printf(ind+1,n,arr,v);
        v.pop_back();
        Printf(ind+1,n,arr,v);
        }
        
    int main()
        {
        int arr[]={3,1,2};
        int n=3;
        vector<int> v;
        Printf(0,n,arr,v);
    return 0;
}

OUTPUT
3 1 2
3 1
3 2
3
1 2
1
2
{ }
