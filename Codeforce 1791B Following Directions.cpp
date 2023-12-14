#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int x=0,y=0;
        bool flag=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L') y-=1;
            else if(s[i]=='R') y+=1;
            else if(s[i]=='D') x-=1;
            else x+=1;

            if(x==1 && y==1) flag=true;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
