#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int groups=1;
    string prev;
    cin>>prev;
    for(int i=1;i<n;i++){
        string s;
        cin>>s;
        if(prev[1]==s[0]) groups++;
        prev=s;
    }
    cout<<groups<<endl;

    return 0;
}
