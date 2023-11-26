#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int maxind=n, minind=-1;
    int maxnum=0, minnum=101;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        if(num>maxnum){
            maxnum=num;
            maxind=i;
        }

        if(num<=minnum){
            minnum=num;
            minind=i;
        }
    }

    int res=maxind+(n-minind-1);
    if(minind<maxind) res--;

    cout<<res<<endl;

    return 0;
}
