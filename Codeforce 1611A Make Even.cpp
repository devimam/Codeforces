#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        int lastchar=s[s.size()-1]-'0';

        if(lastchar%2==0) cout<<0<<endl;
        else{
            bool flag=false;
            for(int j=0;j<s.size();j++){
                int chardigit=s[j]-'0';
                if(chardigit%2==0){
                    if(j==0) cout<<1<<endl;
                    else cout<<2<<endl;
                    flag=true;
                    break;
                }
            }
            if(!flag) cout<<-1<<endl;
        }
    }

    return 0;
}
