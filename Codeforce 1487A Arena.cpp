#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int minelm=INT_MAX;
        int cnt=0;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            if(num<minelm) {minelm=num;cnt=1;}
            else if(num==minelm) cnt++;
        }

        if(cnt==n) cout<<0<<endl;
        else cout<<n-cnt<<endl;
    }

    return 0;
}
