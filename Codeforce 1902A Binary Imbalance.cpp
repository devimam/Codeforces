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

        int zerocnt=0, onecnt=0;
        bool opportunity=false;
        for(int j=0;j<n;j++){
            if(s[j]=='0') zerocnt++;
            else if(s[j]=='1') onecnt++;


            if(!opportunity && j-1>=0 && s[j-1]!=s[j]) opportunity=true;
        }
        if(zerocnt>onecnt || opportunity) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
