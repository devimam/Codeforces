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

        int dig=floor(log2(num)+1);

        unsigned long long int res=pow(2,dig-1)-1;

        cout<< res <<endl;
    }

    return 0;
}
