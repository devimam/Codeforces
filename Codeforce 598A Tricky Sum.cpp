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

        long long int sum1=(num*(num+1))/2;
        long long int power=(int)log2(num);
        long long int sum2=pow(2,power+1)-1;
        ///cout<<sum1<<" "<<sum2<<endl;
        cout<<sum1-2*sum2<<endl;
    }

    return 0;
}
