#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    int op1=n-a;
    int op2=b+1;

    cout<<min(op1,op2)<<endl;

    return 0;
}
