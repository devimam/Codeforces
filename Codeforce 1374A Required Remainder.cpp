#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int x,y,n;
        cin>>x>>y>>n;

        unsigned long long int res = n/x;
        unsigned long long int rem=n%x;

        if(rem<y) cout<< (res-1)*x+y<<endl;
        else cout<<res*x+y<<endl;
    }

    return 0;
}
