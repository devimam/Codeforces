#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    string str;
    cin>>str;

    queue<char> q;
    q.push('h');
    q.push('e');
    q.push('l');
    q.push('l');
    q.push('o');

    for(int i=0;i<str.size();i++){
        if(str[i]==q.front()) q.pop();
    }

    if(q.empty()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
