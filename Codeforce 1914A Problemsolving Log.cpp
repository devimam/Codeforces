#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        map<char,int> m;
        for(int j=0;j<n;j++){
            char ch;
            cin>>ch;
            if(m.find(ch)==m.end()) m[ch]=0;
            m[ch]++;
        }

        int cnt=0;
        for(map<char,int>::iterator it=m.begin();it!=m.end();it++){
            char ch=it->first;
            int times=it->second;

            if(ch-'A'+1<=times) cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
