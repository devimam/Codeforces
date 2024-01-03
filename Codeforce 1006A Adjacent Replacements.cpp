#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        unsigned long long int num;
        cin>>num;


        if(i!=0) cout<<" ";
        cout<< 2*((unsigned long long int) ceil(num/2.0))-1;
    }
    cout<<endl;

    return 0;
}
