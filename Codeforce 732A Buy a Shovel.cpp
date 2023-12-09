#include <iostream>

using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;

    for(long int i=1;;i++){
        if((k*i)%10==r || (k*i)%10==0){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
