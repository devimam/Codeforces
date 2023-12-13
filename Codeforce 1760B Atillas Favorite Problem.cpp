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

        int mx=0;
        for(int j=0;j<n;j++){
            int ch=s[j]-'a'+1;
            if(ch>mx) mx=ch;
        }

        cout<<mx<<endl;
    }

    return 0;
}
