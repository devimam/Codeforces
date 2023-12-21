#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int num;
        cin>>num;

        unsigned long long int res=num/10;

        int lastdigit=num%10;
        if(lastdigit==9) res++;

        cout<<res<<endl;
    }

    return 0;
}
