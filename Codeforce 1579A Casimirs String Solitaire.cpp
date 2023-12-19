#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        int acnt=0,bcnt=0,ccnt=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='A') acnt++;
            else if(s[j]=='B') bcnt++;
            else if(s[j]=='C') ccnt++;
        }
        if(bcnt==acnt+ccnt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
