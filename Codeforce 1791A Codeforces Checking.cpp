#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string global="codeforces";
    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        if(global.find(s)==string::npos) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
