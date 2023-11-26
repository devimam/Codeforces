#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    int res=ceil((log(b)-log(a))/(log(3)-log(2)));
    if(a*pow(3, res) == b*pow(2,res)) res++;

    cout<< res <<endl;

    return 0;
}
