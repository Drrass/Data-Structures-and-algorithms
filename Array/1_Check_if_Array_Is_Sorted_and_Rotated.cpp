problem link-https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
  
  
  class Solution {
public:
    bool check(vector<int>& nums) {
    int count=0;
    for(int i=1;i<nums.size();i++){
       if(nums[i]<nums[i-1]){
       count++;
       if(count>1)return false;   
       if(nums[i]>nums[0] || nums[nums.size()-1]>nums[0])return false;  
    }}
    return true;
    }
};
