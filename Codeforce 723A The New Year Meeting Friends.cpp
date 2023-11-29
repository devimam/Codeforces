#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int diff1=abs(a-b);
    int diff2=abs(a-c);
    int diff3=abs(b-c);

    if(diff1>diff2 && diff1>diff3) cout<<diff2+diff3<<endl;
    else if(diff2>diff3 && diff2>diff1) cout<<diff1+diff3<<endl;
    else cout<<diff1+diff2<<endl;

    return 0;
}
