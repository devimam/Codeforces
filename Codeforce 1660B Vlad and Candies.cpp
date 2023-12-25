#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        unsigned long long int firstmax=0;
        unsigned long long int secondmax=0;
        unsigned long long int firstnum=0;
        for(int j=0;j<n;j++){
            unsigned long long int num;
            cin>>num;

            if(j==0) firstnum=num;

            if(num>=firstmax){
                secondmax=firstmax;
                firstmax=num;
            }
            else if(num<firstmax && num>secondmax){
                secondmax=num;
            }
        }

        ///cout<<firstmax<<" "<<secondmax<<endl;

        if(n==1 && firstnum>1) cout<<"NO"<<endl;
        else if(n==1 && firstnum<=1) cout<<"YES"<<endl;
        else{
            if(secondmax==0) cout<<"YES"<<endl;
            else{
                if(firstmax-secondmax<=1) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }

    }

    return 0;
}
