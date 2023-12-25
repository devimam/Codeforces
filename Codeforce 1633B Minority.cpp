#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        int zerocnt=0, onecnt=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='0') zerocnt++;
            else onecnt++;
        }

        if(zerocnt==onecnt) zerocnt--;

        if(zerocnt<onecnt) cout<<zerocnt<<endl;
        else cout<<onecnt<<endl;


    }

    return 0;
}
