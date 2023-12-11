#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int num;
        cin>>num;

        cout<< (unsigned long long int)ceil(num/2.0) <<endl;
    }

    return 0;
}
