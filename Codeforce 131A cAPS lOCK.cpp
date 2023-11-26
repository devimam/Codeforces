#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;

    string tmp="";

    int flag=1;

    if(s[0]>='a' && s[0]<='z') {flag=2;tmp+=('A'+(s[0]-'a'));}
    else tmp+=('a'+(s[0]-'A'));

    for(int i=1;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z') ;
        else flag=3;

        tmp+=('a'+(s[i]-'A'));
    }

    if(flag==3) cout<<s<<endl;
    else cout<<tmp<<endl;

    return 0;
}
