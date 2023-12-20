#include <iostream>

using namespace std;

int main()
{
    long long int arr[13]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};

    unsigned long long int a,b;
    cin>>a>>b;

    unsigned long long int mn=min(a,b);

    cout<<arr[mn]<<endl;

    return 0;
}
