#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int n;
        cin>>n;

        int twocnt=0, threecnt=0;
        while(n>0){
            if(n%2==0) {twocnt++;n/=2;}
            else if(n%3==0) {threecnt++;n/=3;}
            else break;
        }

        if(n>1) cout<<-1<<endl;
        else{
            if(twocnt<=threecnt){
                cout<<(threecnt-twocnt)+threecnt<<endl;
            }
            else cout<<-1<<endl;
        }

    }

    return 0;
}
