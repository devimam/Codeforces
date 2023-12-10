#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;

        int player1=max(s1,s2);
        int player2=max(s3,s4);

        int rest1=min(s1,s2);
        int rest2=min(s3,s4);
        int restmax=max(rest1, rest2);

        if(restmax>player1 || restmax>player2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
