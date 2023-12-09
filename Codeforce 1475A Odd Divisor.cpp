#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int num;
        cin>>num;

        //if(num==1099511627776) {cout<<"NO"<<endl;continue;}


        while(num%2==0){
            num=num/2;
        }

        if(num%2!=0 && num>1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
