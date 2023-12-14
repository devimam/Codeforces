#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n,x;
    cin>>n>>x;

    unsigned long long int distressed=0;
    for(int i=0;i<n;i++){
        char ch1;
        unsigned long long int ch2;
        cin>>ch1>>ch2;
        if(ch1=='+') x+=ch2;
        else{
            if(x>=ch2) x-=ch2;
            else distressed++;
        }
    }
    cout<<x<<" "<<distressed<<endl;

    return 0;
}
