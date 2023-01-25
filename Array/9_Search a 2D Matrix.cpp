https://leetcode.com/problems/search-a-2d-matrix/
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n=matrix.size();  int i=0,j=matrix[0].size()-1;
        while(i<n && j>=0){
            if(matrix[i][j]==target){
              return true;
            }
            if(matrix[i][j]>target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};
