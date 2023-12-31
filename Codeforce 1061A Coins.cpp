#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long int n,S;
    cin>>n>>S;

    cout<<(unsigned long long int) ceil(S*1.0/n) <<endl;

    return 0;
}
