#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> m;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        if(m.find(s)==m.end()){
            cout<<"OK"<<endl;
            m[s]=1;
        }
        else{
            cout<<s<<m[s]<<endl;
            m[s]++;
        }
    }

    return 0;
}
