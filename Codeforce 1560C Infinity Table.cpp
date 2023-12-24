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

        unsigned long long int en=ceil(sqrt(num));
        unsigned long long int st=(en-1)*(en-1)+1;

        int md=(st+en*en)/2;

        ///cout<<st<<" "<<md<<" "<<en*en<<endl;

        if(num==md) cout<<en<<" "<<en<<endl;
        else if(num<md) cout<<en-(md-num)<<" "<<en<<endl;
        else cout<<en<<" "<<en-(num-md)<<endl;

    }

    return 0;
}
