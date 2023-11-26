#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int cnt=0;
    for(int t=1;t<=n;t++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2) cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
