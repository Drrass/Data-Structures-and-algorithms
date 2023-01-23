#include <iostream>
using namespace std;

    int  fibo(int num){
        if(num<=1)return num;
        int last=fibo(num-1);
        int slast=fibo(num-2);
        return last+slast;}
        
    int main()
        {
        int ans=fibo(4);
        cout<<ans;
    return 0;
}
