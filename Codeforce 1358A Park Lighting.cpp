#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;

        if(m%2==0){
            cout<<n*(m/2)<<endl;
        }
        else{
            unsigned long int res=(unsigned long int) ceil(n/2.0);
            cout<<n*((m-1)/2)+res<<endl;
        }
    }

    return 0;
}
