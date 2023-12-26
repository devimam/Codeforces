#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;

        n=abs(n);

        if(k>=n) cout<<k-n<<endl;
        else if(n%2==0){
            if(k%2==0) cout<<0<<endl;
            else cout<<1<<endl;
        }
        else{
            if(k%2==1) cout<<0<<endl;
            else cout<<1<<endl;
        }

    }

    return 0;
}
