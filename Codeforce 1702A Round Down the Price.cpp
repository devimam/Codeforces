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

        cout<<(unsigned long long int) (num-pow(10,floor(log10(num)))) <<endl;
    }

    return 0;
}
