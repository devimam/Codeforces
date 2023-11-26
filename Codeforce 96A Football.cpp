#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int zerocnt=0, onecnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            onecnt=0;
            zerocnt++;
            if(zerocnt==7) break;
        }
        else{
            zerocnt=0;
            onecnt++;
            if(onecnt==7) break;
        }
    }
    if(zerocnt==7 || onecnt==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
