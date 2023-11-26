#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<char, int> m;
    string input;
    cin>>input;

    for(int i=0;i<input.size();i++){
        char ch=input[i];
        if(m.find(ch)==m.end()) m[ch]=1;
    }

    if(m.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;
}
