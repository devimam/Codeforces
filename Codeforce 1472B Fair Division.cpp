#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int twocnt=0, onecnt=0;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            if(num==2) twocnt++;
            else onecnt++;
        }


        if(twocnt%2==0){
            if(onecnt%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(onecnt>=2){
                twocnt++;
                onecnt-=2;
                if(onecnt%2==0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
            else cout<<"NO"<<endl;
        }

    }

    return 0;
}
