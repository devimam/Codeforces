#include <iostream>

using namespace std;

int main()
{
    unsigned long long int d1,d2,d3;
    cin>>d1>>d2>>d3;

    unsigned long long int way1=2*(d1+d2);
    unsigned long long int way2=2*(d2+d3);
    unsigned long long int way3=2*(d1+d3);
    unsigned long long int way4=d1+d2+d3;

    cout<< min(way1, min(way2, min(way3,way4))) <<endl;

    return 0;
}
