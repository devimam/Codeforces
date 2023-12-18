#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int j=0;j<t;j++){
        string s;
        cin>>s;

        for(int i=1;i<=8;i++){
            if(i!=s[1]-'0') cout<<s[0]<<i<<endl;

            if(i-1!=s[0]-'a') cout<<(char)('a'+i-1)<<s[1]<<endl;
        }
    }


    return 0;
}
