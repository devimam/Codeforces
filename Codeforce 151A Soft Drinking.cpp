#include <iostream>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    cout<<min((k*l)/(n*nl) ,min(p/(np*n), (c*d)/(1*n)) )<<endl;

    return 0;
}
