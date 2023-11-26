#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int cnt=0;
    int num;
    for(int i=1;i<=k;i++){
        cin>>num;
        if(num>0) cnt++;
    }

    for(int i=k+1;i<=n;i++){
        int num1;
        cin>>num1;
        if(num1==num && num>0) cnt++;
        else num=-1;
    }
    cout<<cnt<<endl;

    return 0;
}
