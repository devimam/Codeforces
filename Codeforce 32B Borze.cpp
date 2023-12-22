#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;

    string res="";
    for(int i=0;i<s.size();){
        if(s[i]=='.'){
            res+="0";
            i++;
        }
        else if(s[i]=='-' && i+1<s.size() && s[i+1]=='.'){
            res+="1";
            i+=2;
        }
        else if(s[i]=='-' && i+1<s.size() && s[i+1]=='-'){
            res+="2";
            i+=2;
        }
    }
    cout<<res<<endl;

    return 0;
}
