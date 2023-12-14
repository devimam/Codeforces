#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int cnt=0;
        if(b>a) cnt++;
        if(c>a) cnt++;
        if(d>a) cnt++;

        cout<<cnt<<endl;

    }

    return 0;
}
