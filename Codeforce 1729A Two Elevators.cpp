#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;

        if(a-1<abs(c-b)+(c-1)) cout<<1<<endl;
        else if(a-1==abs(c-b)+(c-1)) cout<<3<<endl;
        else cout<<2<<endl;
    }

    return 0;
}
