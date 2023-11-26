#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<string> tokens;
    string res="";
    int flag=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && i+1<s.size() && s[i+1]=='U' && i+2<s.size() && s[i+2]=='B'){
            if(res!="") {tokens.push_back(res); res="";}
            i+=2;
        }
        else res+=s[i];
    }
    if(res!="") tokens.push_back(res);

    //cout<<tokens.size()<<endl;

    cout<<tokens[0];
    for(int i=1;i<tokens.size();i++){
        cout<<" "<<tokens[i];
    }
    cout<<endl;


    return 0;
}
