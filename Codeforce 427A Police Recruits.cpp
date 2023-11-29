#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int cnt=0;

    int n;
    cin>>n;

    int res=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        if(num<0){
            cnt=cnt+num;
            if(cnt<0){
                res+=(cnt*(-1));
                cnt=0;
            }
        }
        else{
            cnt+=num;
        }
    }
    cout<<res<<endl;

    return 0;
}
