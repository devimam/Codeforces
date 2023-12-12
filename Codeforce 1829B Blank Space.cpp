#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int cnt=0;
        int mxcnt=0;
        int prev=1;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            if(num==0){
                if(prev==0) cnt++;
                else{
                    cnt=1;
                }
                prev=0;
            }
            else{
                if(cnt>mxcnt) mxcnt=cnt;
                prev=1;
            }
        }
        if(cnt>mxcnt) mxcnt=cnt;

        cout<<mxcnt<<endl;
    }

    return 0;
}
