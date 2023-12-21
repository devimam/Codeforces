#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        int firstind=-1, lastind=-1;
        for(int j=0;j<s.size();j++){
            if(s[j]=='0') continue;
            else {firstind=j;break;}
        }

        for(int k=s.size()-1;k>=0;k--){
            if(s[k]=='0') continue;
            else {lastind=k;break;}
        }

        int zerocnt=0;
        for(int j=firstind;j<=lastind;j++){
            if(s[j]=='0') zerocnt++;
        }
        cout<<zerocnt<<endl;
    }

    return 0;
}
