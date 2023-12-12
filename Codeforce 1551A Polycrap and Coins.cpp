#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int res=n/3;
        int rem=n%3;

        if(rem==0) cout<<res<<" "<<res<<endl;
        else if(rem==1) cout<<res+1<<" "<<res<<endl;
        else if(rem==2) cout<<res<<" "<<res+1<<endl;
    }

    return 0;
}
