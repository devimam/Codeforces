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

        string res="";
        for(int j=0;j<n;j++){
            if(s[j]=='U') res+='D';
            else if(s[j]=='D') res+='U';
            else if(s[j]=='L' && s[j+1]=='R'){
                res+="LR";
                j++;
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
