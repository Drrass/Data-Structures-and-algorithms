problem link-https://leetcode.com/problems/subarray-sum-equals-k/

Input: nums = [1,1,1], k = 2
Output: 2
  
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int maxi=0;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum==k){
                maxi=i+1;
            }else{
                if(mp.find(sum)!=mp.end()){
                    maxi=max(maxi, i-mp[sum]);
                }else{
                    mp[sum]=i;
                }
            }
            
        }

      return maxi;
    }
};  
