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

        int st,en;
        for(st=0, en=n-1;st<=en;st++, en--){
            if(s[st]!=s[en]) continue;
            else break;
        }
        cout<<en-st+1<<endl;
    }

    return 0;
}
