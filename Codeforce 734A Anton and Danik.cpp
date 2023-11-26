#include <iostream>
#include <string>

using namespace std;

int main()
{
    int sz;
    cin>>sz;

    string in;
    cin>>in;

    int cnt=0;
    for(int i=0;i<sz;i++){
        if(in[i]=='A') cnt++;
        else cnt--;
    }

    if(cnt>0) cout<<"Anton"<<endl;
    else if(cnt<0) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

    return 0;
}
