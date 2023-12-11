#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int num;
        cin>>num;

        int mn=INT_MAX;
        int zerocnt=0;
        unsigned long long int prod=1;
        for(int j=0;j<num;j++){
            int a;
            cin>>a;

            if(a!=0) prod*=a;
            else zerocnt++;
            if(a<mn) mn=a;
         }
         if(zerocnt>=2) cout<<0<<endl;
         else if(zerocnt==1) cout<<prod<<endl;
         else cout<< prod*(mn+1)/mn <<endl;
    }

    return 0;
}
