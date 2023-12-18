#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin>>t;

    string s;
    cin>>s;

    map<string,int> m;
    string mxstr="";
    int mxcnt=INT_MIN;
    for(int i=0;i<t-1;i++){
        string cur="";
        cur+=s[i];
        cur+=s[i+1];

        ///cout<<cur<<endl;

        if(m.find(cur)==m.end()) m[cur]=0;
        m[cur]++;

        if(m[cur]>mxcnt){
            mxcnt=m[cur];
            mxstr=cur;
        }

    }
    cout<<mxstr<<endl;

    return 0;
}
