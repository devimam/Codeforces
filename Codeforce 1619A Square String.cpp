#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        if(s.size()%2!=0) cout<<"NO"<<endl;
        else{
            int md=s.size()/2;

            bool flag=true;
            for(int st1=0, st2=md; st1<md, st2<s.size(); st1++, st2++){
                ///cout<<st1<<" "<<st2<<endl;
                if(s[st1]==s[st2]) continue;
                else{
                    flag=false;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}
