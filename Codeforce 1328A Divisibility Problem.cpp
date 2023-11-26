#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;

        if(a%b==0) cout<<0<<endl;
        else{
            int multiple=ceil(a*1.0/b);
            int val=multiple*b-a;
            cout<<val<<endl;
        }

    }

    return 0;
}
