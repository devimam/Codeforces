#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt=0;
    int maxcnt=0;
    for(int i=0;i<n;i++){
        char ch=s[i];

        if(ch!='x'){
            if(cnt>2) maxcnt+=cnt-2;
            cnt=0;
        }
        else cnt++;

    }
    if(cnt>2) maxcnt+=cnt-2;

    cout<<maxcnt<<endl;

    return 0;
}
