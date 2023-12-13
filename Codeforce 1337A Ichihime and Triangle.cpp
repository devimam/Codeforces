#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(b+c>d) cout<<b<<" "<<c<<" "<<d<<endl;
        else cout<<b<<" "<<c<<" "<<c<<endl;
    }

    return 0;
}
