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

        string target="meow";
        int ind=0;
        int j=0;
        bool flag=false;
        for(j=0;j<n;j++){
            char ch=s[j];
            if(ch>='A' && ch<='Z') ch+=32;

            if(ch==target[ind]) {flag=true;continue;}
            else if(flag && ind<3 && ch==target[ind+1]){
                ind++;
                continue;
            }
            else break;
        }
        if(ind==3 && j==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
