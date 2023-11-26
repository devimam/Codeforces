#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n,t;
    cin>>n>>t;

    unsigned long long int mid=(n+1)/2;

    if(t>mid){
        t=t-mid;
        cout<<2*t<<endl;
    }
    else{
        cout<<(2*t-1)<<endl;
    }

    return 0;
}
