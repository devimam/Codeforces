#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    string s="";
    for(int i=0;i<n;i++){
        if(t<10) s+=('0'+t);
        else if(t==10){
            if(n>1){
                if(i==0) s+='1';
                else s+='0';
            }
            else{
                s="-1";
            }
        }
    }
    cout<<s<<endl;

    return 0;
}
