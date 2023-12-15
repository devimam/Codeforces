#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int oddcnt=0;
        int evencnt=0;

        for(int j=0;j<2*n;j++){
            int num;
            cin>>num;

            if(num%2==0) evencnt++;
            else oddcnt++;
        }

        if(oddcnt==evencnt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
