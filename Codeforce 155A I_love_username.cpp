#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int num;
    cin>>num;
    int mn=num, mx=num;
    int cnt=0;
    for(int i=1;i<n;i++){
        cin>>num;
        if(num<mn){
            cnt++;
            mn=num;
        }
        if(num>mx){
            cnt++;
            mx=num;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
