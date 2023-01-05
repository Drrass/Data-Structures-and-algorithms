https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count=0;int minn=INT_MAX; string temp;
        for(int i=0;i<strs.size();i++){
            if(strs[i].length()<minn){
                minn=strs[i].length();
                temp=strs[i];   }    }
                
          for(int i=0;i<temp.size();i++)      {
              for(int j=0;j<strs.size();j++)      {
              if(strs[j][i]!=temp[i]){
                  return temp.substr(0,count);
              }            
          }
          count++; 
          }
          return temp.substr(0,count);
    }
};
