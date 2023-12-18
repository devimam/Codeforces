#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        stack<int> st;
        int turn=0;
        for(int j=0;j<s.size();j++){
            if(st.empty()) st.push(s[j]);
            else{
                if(st.top()!=s[j]) {st.pop();turn++;}
                else st.push(s[j]);
            }
        }
        if(turn%2==0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }

    return 0;
}
