#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int x,y,a,b;
        cin>>x>>y>>a>>b;

        unsigned long long int mn=min(x,y);
        unsigned long long int mx=max(x,y);

        cout<< min( (mx-mn)*a+mn*b, (mx-mn)*a+(2*mn)*a ) <<endl;
    }

    return 0;
}
