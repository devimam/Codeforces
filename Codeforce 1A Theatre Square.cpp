#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long int n,m,a, res;
    cin>>n>>m>>a;
    res=ceil(n*1.00/a)*ceil(m*1.00/a);
    cout<<res<<endl;
    return 0;
}
