#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin>>s;

    if(s[0]>='A' && s[0]<='Z') cout<<s<<endl;
    else{
        s[0]='A'+(s[0]-'a');
        cout<<s<<endl;
    }

    return 0;
}
