#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        unsigned long int num;
        cin>>num;


        if(num%2==0) cout<<(num/2)-1<<endl;
        else cout<<num/2<<endl;
    }

    return 0;
}
