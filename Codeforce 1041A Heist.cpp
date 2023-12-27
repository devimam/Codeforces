#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    unsigned long long int num;
    cin>>num;
    unsigned long long int mn=num, mx=num;
    for(int i=1;i<n;i++){
        cin>>num;
        if(num<mn) mn=num;
        if(num>mx) mx=num;
    }
    cout<<mx-mn+1-n<<endl;

    return 0;
}
