#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,c,n;
        cin>>a>>b>>c>>n;

        int mx=max(a,max(b,c));
        int diff=(mx-a)+(mx-b)+(mx-c);

        int rem=n-diff;
        if(rem>=0 && rem%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
