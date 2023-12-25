#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int lcnt=0, rcnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L') lcnt++;
        if(s[i]=='R') rcnt++;
    }

    cout<<lcnt+rcnt+1<<endl;

    return 0;
}
