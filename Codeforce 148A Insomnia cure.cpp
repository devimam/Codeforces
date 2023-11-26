#include <iostream>

using namespace std;

int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    int cnt=0;

    for(int i=1;i<d+1;i++){
        if(i%k==0) cnt++;
        else if(i%l==0) cnt++;
        else if(i%m==0) cnt++;
        else if(i%n==0) cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}
