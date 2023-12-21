#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    unsigned long long int x;
    cin>>n>>x;

    int cnt=0;
    for(unsigned long long int i=1;i<=floor(sqrt(x));i++){
        if(x%i==0){
            unsigned long long int b=x/i;

            if(i<=n && b<=n){
                if(i!=b) cnt+=2;
                else cnt+=1;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
