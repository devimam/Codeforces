#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt=0;
    char prev=s[0];
    for(int i=1;i<s.size();i++){
        char cur=s[i];
        if(cur==prev) cnt++;
        else prev=cur;
    }
    cout<<cnt<<endl;

    return 0;
}
