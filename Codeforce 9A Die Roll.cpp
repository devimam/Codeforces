#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int mx=max(a,b);

    int numerator=6-mx+1;
    int denominator=6;

    if(numerator==0) cout<<0<<"/"<<1<<endl;
    else if(numerator==1) cout<<1<<"/"<<6<<endl;
    else if(numerator==2) cout<<1<<"/"<<3<<endl;
    else if(numerator==3) cout<<1<<"/"<<2<<endl;
    else if(numerator==4) cout<<2<<"/"<<3<<endl;
    else if(numerator==5) cout<<5<<"/"<<6<<endl;
    else cout<<1<<"/"<<1<<endl;

    return 0;
}
