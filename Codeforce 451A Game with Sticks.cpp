#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int mn=min(n,m);

    if(mn%2==0) cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;

    return 0;
}
