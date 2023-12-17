#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int collection=n;

    int i;
    for(i=1;collection>0;i++){
        collection--;
        if(i%m==0) collection++;
    }
    cout<<i-1<<endl;


    return 0;
}
