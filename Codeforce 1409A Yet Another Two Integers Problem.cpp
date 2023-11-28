#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        long int a,b;
        cin>>a>>b;

        unsigned long int diff=abs(a-b);

        unsigned long int res=0;
        for(int i=10;i>=1;i--){
            res+=(diff/i);
            diff=diff%i;
        }
        cout<<res<<endl;
    }

    return 0;
}
