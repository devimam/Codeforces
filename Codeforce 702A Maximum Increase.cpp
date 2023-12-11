#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int cnt=0;
    int prev=0;
    int mxcnt=0;

    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        if(num>prev) cnt++;
        else{
            if(cnt>mxcnt) mxcnt=cnt;
            cnt=1;
        }
        prev=num;
    }
    if(cnt>mxcnt) mxcnt=cnt;

    cout<<mxcnt<<endl;

    return 0;
}
