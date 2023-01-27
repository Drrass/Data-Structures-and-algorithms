https://leetcode.com/problems/combination-sum-iii/
Input: k = 3, n = 7
Output: [[1,2,4]]
Explanation:
1 + 2 + 4 = 7
There are no other valid combinations.


class Solution {
public:
    void func(int ind, int arr[],int n,int k,vector<int> &ds,vector<vector<int>> &ans){
   if(ds.size()==k && n==0){
       ans.push_back(ds);
       return;
   }
   if(ds.size()>k){
       return;
   }
   for(int i=ind;i<9;i++){
       if(i>ind && arr[i]==arr[i-1]) continue;
       if(arr[i]>n) break;
       ds.push_back(arr[i]);
       func(i+1,arr,n-arr[i],k,ds,ans);
        ds.pop_back();
       
   }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        int arr[]={1,2,3,4,5,6,7,8,9};
        vector<int> ds;
        vector<vector<int>> ans;
        func(0,arr,n,k,ds,ans);
        return ans;

    }
};
