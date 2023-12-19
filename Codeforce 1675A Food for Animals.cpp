#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        long long int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

        if(a<x){
            c=c-(x-a);
        }
        ///cout<<c<<endl;

        if(c>=0 && b+c>=y){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
