#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,m,k;
        cin>>n>>m>>k;

        int perplayer=n/k;

        if(m==0) cout<<0<<endl;
        else if(perplayer>=m){
            cout<<m<<endl;
        }
        else{
            int rem=m-perplayer;
            int remplayer=k-1;

            int otherplayer=ceil(rem*1.0/(k-1));
            if(otherplayer==perplayer) cout<<0<<endl;
            else cout<<perplayer-otherplayer<<endl;
        }
    }

    return 0;
}
