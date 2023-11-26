#include <iostream>

using namespace std;

int main()
{
    int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n;
    cin>>n;

    int flag=0;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(n%arr[i]==0) {flag=1;break;}
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
