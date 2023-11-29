#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        int sum=0;
        for(int i=0;i<6;i++){
            if(i>2) sum+=(num%10);
            else sum-=(num%10);
            num=num/10;
        }

        if(sum==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
