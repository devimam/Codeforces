#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string s1, s2, s3;
    cin>>s1>>s2>>s3;

    map<char, int> m;
    for(int i=0;i<s1.size();i++){
        char ch=s1[i];
        if(m.find(ch)==m.end()) m[ch]=0;
        m[ch]++;
    }

    for(int i=0;i<s2.size();i++){
        char ch=s2[i];
        if(m.find(ch)==m.end()) m[ch]=0;
        m[ch]++;
    }

    bool flag=true;
    for(int i=0;i<s3.size();i++){
        char ch=s3[i];
        if(m.find(ch)==m.end()) {flag=false;break;}
        else{
            m[ch]--;
            if(m[ch]<0) {flag=false;break;}
        }
    }

    for(map<char,int>::iterator it=m.begin();it!=m.end();it++){
        if(it->second>0) {flag=false;break;}
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
