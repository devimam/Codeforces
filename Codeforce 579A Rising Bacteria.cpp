#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long int n;
    cin>>n;

    unsigned long long int res=floor(log2(n));
    unsigned long long int diff=n-pow(2,res);

    int cnt=1;
    while(diff>0){
        res=floor(log2(diff));
        diff=diff-pow(2,res);
        ++cnt;
    }

    cout<<cnt<<endl;

    return 0;
}
