#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;


        unsigned long long int sum=0;
        for(int j=0;j<n;j++){
            unsigned long long int num;
            cin>>num;
            sum+=num;
        }

        cout<<(unsigned long long int) ceil(sum*1.0/n)<<endl;
    }

    return 0;
}
