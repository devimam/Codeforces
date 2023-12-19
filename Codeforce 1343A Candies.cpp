#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int n;
        cin>>n;

        unsigned long long int st=3;
        while(true){
            if(n%st==0) {cout<<n/st<<endl;break;}
            st=st<<1;
            st=st | 1;
        }
    }

    return 0;
}
