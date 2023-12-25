#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int mn1,mn2,mn3;
        vector<unsigned long long int> v;

        for(int j=0;j<3;j++){
            unsigned long long int num;
            cin>>num;

            v.push_back(num);
        }
        sort(v.begin(),v.end());
        mn1=v[0];
        mn2=v[1];
        mn3=v[2];

        ///cout<<mn1<<" "<<mn2<<" "<<mn3<<endl;

        unsigned long long int diff=mn2-mn1;
        if(mn3>=diff){
            mn1+=diff;
            mn3-=diff;

            cout<<mn1+(mn3/2)<<endl;
        }
        else{
           cout<<mn1+mn3<<endl;
        }

    }

    return 0;
}
