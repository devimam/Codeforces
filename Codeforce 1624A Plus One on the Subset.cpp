#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int mx=INT_MIN, mn=INT_MAX;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            if(num>mx) mx=num;
            if(num<mn) mn=num;
        }
        cout<<mx-mn<<endl;
    }

    return 0;
}
