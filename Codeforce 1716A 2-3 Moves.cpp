#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long int num, cnt=0;
        cin>>num;

        if(num==1) {cout<<2<<endl;continue;}

        ///way 1: following 3 steps
        unsigned long long int res1=num/3;
        int rem=num%3;
        if(rem==2) res1++;
        else if(rem==1) res1+=1;

        ///way 2: following 2 steps
        unsigned long long int res2=num/2;
        int rem1=num%2;
        if(rem1==1) res2+=1;

        if(res1<res2) cout<<res1<<endl;
        else cout<<res2<<endl;
    }

    return 0;
}
