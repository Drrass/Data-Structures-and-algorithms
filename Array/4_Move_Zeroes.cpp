problem link-https://leetcode.com/problems/move-zeroes/
  
 Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
  
  class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()<=1){
            return ;
        }
        int st=0;
        int ed=1;
        while(ed!= nums.size()){
            if(nums[st]==0 && nums[ed]!=0){
                swap(nums[st],nums[ed]);
                st++;
                ed++;
            }
          
            else if(nums[st]==0 && nums[ed]==0){
                ed++;
            }
            else{
                st++;
                ed++;
            }
        }
    }
};
