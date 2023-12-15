#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;


        if(b==a) cout<<0<<endl;
        else if(a<b){
            int diff=b-a;
            if(diff%2!=0) cout<<1<<endl;
            else{
                cout<<2<<endl;
            }
        }
        else{
            int diff=a-b;
            if(diff%2==0) cout<<1<<endl;
            else{
                cout<<2<<endl;
            }
        }
    }

    return 0;
}
