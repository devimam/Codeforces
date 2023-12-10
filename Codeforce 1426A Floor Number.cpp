#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int p, x;
        cin>>p>>x;

        if(p<=2) cout<<1<<endl;
        else cout<<floor((p+2*x-3.0)/x)<<endl;
    }

    return 0;
}
