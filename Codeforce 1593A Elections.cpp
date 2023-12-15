#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int a,b,c;
        cin>>a>>b>>c;

        if(a>max(b,c)) cout<<0;
        else cout<<max(b,c)+1-a;
        cout<<" ";
        if(b>max(a,c)) cout<<0;
        else cout<<max(a,c)+1-b;
        cout<<" ";
        if(c>max(a,b)) cout<<0;
        else cout<<max(a,b)+1-c;
        cout<<endl;
    }

    return 0;
}
