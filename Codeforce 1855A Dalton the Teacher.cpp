#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int rightcnt=0;
        for(int j=1;j<=n;j++){
            int num;
            cin>>num;
            if(j==num) rightcnt++;
        }
        cout<<(int) ceil(rightcnt/2.0)<<endl;
    }

    return 0;
}
