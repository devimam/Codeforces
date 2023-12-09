#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    int mx;

    cin>>a>>b>>c>>d;

    mx=max(a,max(b, max(c,d)));

    if(mx-a==0) cout<<mx-b<<" "<<mx-c<<" "<<mx-d<<endl;
    if(mx-b==0) cout<<mx-a<<" "<<mx-c<<" "<<mx-d<<endl;
    if(mx-c==0) cout<<mx-a<<" "<<mx-b<<" "<<mx-d<<endl;
    if(mx-d==0) cout<<mx-a<<" "<<mx-b<<" "<<mx-c<<endl;

    return 0;
}
