#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int evensum=0, oddsum=0;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            if(num%2==0) evensum+=num;
            else oddsum+=num;
        }
        if(evensum>oddsum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
