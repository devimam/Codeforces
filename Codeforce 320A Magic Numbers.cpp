#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;

    bool flag=true;
    for(int i=0;i<s.size();){
        if(s[i]=='1' && i+1<s.size() && s[i+1]=='4' && i+2<s.size() && s[i+2]=='4') i+=3;
        else if(s[i]=='1' && i+1<s.size() && s[i+1]=='4') i+=2;
        else if(s[i]=='1') i+=1;
        else {flag=false;break;}
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
