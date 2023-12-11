#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        int cnt=0;
        if(s[0]!='a') cnt++;
        if(s[1]!='b') cnt++;
        if(s[2]!='c') cnt++;

        if(cnt<=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
