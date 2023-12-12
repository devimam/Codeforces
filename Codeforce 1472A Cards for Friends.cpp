#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int w,h,n;
        cin>>w>>h>>n;

        int mult1=1;
        while(w%2==0) {mult1*=2;w/=2;}

        int mult2=1;
        while(h%2==0) {mult2*=2;h/=2;}

        if(mult1*mult2>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
