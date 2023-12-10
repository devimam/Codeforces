#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    string main="codeforces";
    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        int cnt=0;
        for(int i=0;i<10;i++){
            if(s[i]==main[i]) continue;
            else cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
