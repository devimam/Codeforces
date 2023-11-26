#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int maxcnt=0;
    int cnt=0;
    unsigned long int mx=LONG_MIN;
    for(int i=0;i<n;i++){
        unsigned long int num;
        cin>>num;

        if(num<mx){
            if(cnt>maxcnt) maxcnt=cnt;
            cnt=1;
            mx=num;
        }
        else if(num>=mx){
            mx=num;
            cnt++;
        }
    }
    if(cnt>maxcnt) maxcnt=cnt;

    cout<<maxcnt<<endl;

    return 0;
}
