#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    string rf="314159265358979323846264338327";

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        int cnt=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==rf[j]) cnt++;
            else break;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
