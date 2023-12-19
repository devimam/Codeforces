#include <iostream>
#include <set>

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

        set<string> st;
        for(int j=1;j<n;j++){
            string sub="";
            sub+=s[j-1];
            sub+=s[j];

            st.insert(sub);
        }
        cout<<st.size()<<endl;
    }

    return 0;
}
