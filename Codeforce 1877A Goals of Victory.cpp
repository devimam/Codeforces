#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int sum=0;
        for(int j=0;j<n-1;j++){
            int num;
            cin>>num;
            sum+=num;
        }
        cout<<(-1)*sum<<endl;
    }

    return 0;
}
