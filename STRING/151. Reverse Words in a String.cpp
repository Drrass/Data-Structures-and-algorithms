https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
     stack<string> st;
     string ans;
     for(int i=0; i<s.size(); i++){
         string temp;
         if(s[i]==' ')continue;     //if blank space continue         
         while(s[i]!=' ' && i<s.size()){//push all char in string
            temp+=s[i]; i++;}
             st.push(temp);  //push word in stack
         }
         while(!st.empty()){
           ans += st.top();  ans+=' '; st.pop(); //add top word of stack in string
         }
     
         return ans.substr(0,ans.size()-1);
    }
};
