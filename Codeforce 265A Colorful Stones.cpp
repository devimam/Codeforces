#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;

    string t;
    cin>>t;

    int pos=0;
    for(int i=0;i<t.size();i++){
        if(t[i]==s[pos]) pos++;
    }
    cout<<pos+1<<endl;

    return 0;
}
