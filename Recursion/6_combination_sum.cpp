problem link- https://leetcode.com/problems/combination-sum/description/

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]

class Solution {
public:

    void findcombination(int ind,int target,vector<int>& candidates,vector<vector<int>> &ans,vector<int> &ds){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            findcombination(ind,target-candidates[ind],candidates,ans,ds);
            ds.pop_back();
        }
        findcombination(ind+1,target,candidates,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0,target,candidates,ans,ds);
        return ans;
    }
};
