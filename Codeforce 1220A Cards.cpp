#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    map<char,int> m;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(m.find(ch)==m.end()) m[ch]=0;
        m[ch]++;
    }

    int mn=min(m['o'], min(m['n'], m['e']));
    bool isprint=false;
    if(mn>0){
        isprint=true;
        for(int i=0;i<mn;i++){
            if(i==0) cout<<1;
            else cout<<" "<<1;
        }
    }

    m['o']-=mn;
    m['n']-=mn;
    m['e']-=mn;

    mn=min(m['z'], min(m['e'], min(m['r'],m['o'])));

    for(int i=0;i<mn;i++){
        if(!isprint) {cout<<0;isprint=true;}
        else cout<<" "<<0;
    }
    cout<<endl;

    return 0;
}
