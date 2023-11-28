#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int cnt=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        if(5-num>=k) cnt++;
    }
    cout<<cnt/3<<endl;

    return 0;
}
