#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        char ch;
        cin>>ch;

        int sz=s.size();

        int lcnt=0;
        bool flag=false;
        for(int j=0;j<s.size();j++){
            if(s[j]==ch){
                int rcnt=sz-lcnt-1;
                if(lcnt%2==0 && rcnt%2==0) flag=true;
            }
            lcnt++;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
