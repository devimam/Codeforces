#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int n;
        cin>>n;

        unsigned long long int sum=0;
        while(n>0){
            if(n%2==0){
                sum+=n;
                n=n/2;
            }
            else{
                sum+=n;
                n=(n-1)/2;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
