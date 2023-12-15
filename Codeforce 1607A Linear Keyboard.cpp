#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s1,s2;
        cin>>s1>>s2;

        map<char, int> m;
        for(int j=0;j<s1.size();j++){
            char ch=s1[j];
            m[ch]=j;
        }

        int res=0;
        int prev=m[s2[0]];
        for(int j=1;j<s2.size();j++){
            int ch=m[s2[j]];

            int diff=abs(ch-prev);
            res+=diff;
            prev=ch;
        }
        cout<<res<<endl;
    }

    return 0;
}
