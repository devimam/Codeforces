#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        stack<char> st;
        queue<char> q;
        bool flag=false;
        int acnt=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='a') {acnt++;flag=true;continue;}

            if(!flag){
                st.push(s[j]);
            }
            else{
                q.push(s[j]);
            }
        }

        if(acnt!=1) cout<<"NO"<<endl;
        else{
            string srch="bcdefghijklmnopqrstuvwxyz";
            flag=true;
            for(int j=0;j<srch.size();j++){
                if(st.empty() && q.empty()) break;

                if(!st.empty() && st.top()==srch[j]){
                    st.pop();
                }
                else if(!q.empty() && q.front()==srch[j]){
                    q.pop();
                }
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
