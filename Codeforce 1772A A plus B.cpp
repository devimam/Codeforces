#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        cout<<s[0]-'0'+s[2]-'0'<<endl;
    }

    return 0;
}
