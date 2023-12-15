#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int a,b,c;
        cin>>a>>b>>c;

        unsigned long int cnt=0;
        while(a<=c && b<=c){
            if(a<=b) a+=b;
            else b+=a;
            cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
