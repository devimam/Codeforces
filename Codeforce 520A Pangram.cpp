#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string in;
    cin>>in;

    set<char> s;
    for(int i=0;i<n;i++){
        char ch=in[i];
        if(ch>='A' && ch<='Z') ch='a'+(ch-'A');
        s.insert(ch);
    }
    if(s.size()==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
