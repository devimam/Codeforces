#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> v;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            v.push_back(num);
        }

        string s;
        cin>>s;

        bool flag=true;
        map<int,char> m;
        for(int i=0;i<n;i++){
            int num=v[i];
            char ch=s[i];

            if(m.find(num)==m.end()) m[num]=ch;
            else if(m[num]!=ch) {flag=false;break;}
        }
        if(!flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
