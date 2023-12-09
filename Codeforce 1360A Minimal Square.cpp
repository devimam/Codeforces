#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;

        int mn=min(a,b);
        int mx=max(a,b);

        if(2*mn>mx) cout<<4*mn*mn<<endl;
        else cout<<mx*mx<<endl;
    }

    return 0;
}
