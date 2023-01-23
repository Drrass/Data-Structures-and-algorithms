#include <iostream>
using namespace std;

    bool  pollin(int i,string &str){
        if(i>=str.size()/2)return true;
        if(str[i]!=str[str.size()-i-1])return false;
        return pollin(i+1,str);
        }
    int main()
        {
        string str;
        cin>>str;
        cout<<pollin(0,str);
    return 0;
}
