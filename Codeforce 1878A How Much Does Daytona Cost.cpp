#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;

        bool flag=false;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;
            if(num==k && !flag) {cout<<"YES"<<endl;flag=true;}
        }
        if(!flag) cout<<"NO"<<endl;
    }

    return 0;
}
