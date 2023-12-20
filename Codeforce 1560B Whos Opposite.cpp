#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        long long int a,b,c;
        cin>>a>>b>>c;

        long long int diff=abs(a-b)-1;
        unsigned long long int n=2*diff+2;
        if(a>n || b>n || c>n) cout<<-1<<endl;
        else if(n==2){
            if(c==a) cout<<b<<endl;
            else if(c==b) cout<<a<<endl;
            else cout<<-1<<endl;
        }
        else{
            cout<<((c+diff)%n)+1<<endl;
        }
    }

    return 0;
}
