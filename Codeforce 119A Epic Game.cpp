#include <iostream>

using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    else if(b==0) return a;

    int rem=a%b;
    return gcd(b,rem);
}

int main()
{
    int a,b,n;
    cin>>a>>b>>n;

    int turn=0;
    while(n>0){
        int res;
        if(turn==0){
            if(a>=n) res=gcd(a,n);
            else res=gcd(n,a);
            turn=1;
        }
        else{
            if(b>=n) res=gcd(b,n);
            else res=gcd(n,b);
            turn=0;
        }
        n-=res;
        if(n<0) n=0;
        ///cout<<res<<endl;
    }
    if(turn==0) cout<<"1"<<endl;
    else cout<<"0"<<endl;

    return 0;
}
