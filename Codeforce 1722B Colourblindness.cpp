#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        string s1, s2;
        cin>>s1>>s2;

        for(int j=0;j<n;j++){
            if(s1[j]=='G') s1[j]='B';
            if(s2[j]=='G') s2[j]='B';
        }

        if(s1==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
