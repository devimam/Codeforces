#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin>>s1>>s2;

    if(s1.size()!=s2.size()) cout<<"NO"<<endl;
    else{
        int flag=0;
        for(int i=0, j=s1.size()-1;i<s1.size(), j>=0;i++, j--){
            if(s1[i]!=s2[j]) {flag=1;break;}
        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
