link-https://leetcode.com/problems/letter-combinations-of-a-phone-number/



class Solution {
public:

    void combination(int num,string ans,string output[],vector<string> &v){
        if(num==0){
            v.push_back(ans);
            return; 
        }
        int n1=num%10;
        string s=output[n1];

        for(int i=0;i<s.size();i++){
            combination(num/10,s[i]+ans,output,v);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> v;
        if(digits=="")return v;
        int num=stoi(digits);
        string ans={""};
        string output[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        combination(num,ans,output,v);
        return v;
    }
};
