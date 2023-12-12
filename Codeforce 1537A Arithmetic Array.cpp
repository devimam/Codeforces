#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int c=0;c<t;c++){
        int n;
        cin>>n;

        int sum=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            sum+=num;
        }

        if(sum==n) cout<<0<<endl;
        else if(sum>n) cout<<sum-n<<endl;
        else cout<<1<<endl;
    }

    return 0;
}
