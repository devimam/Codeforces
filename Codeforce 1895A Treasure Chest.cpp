#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int x,y,k;
        cin>>x>>y>>k;

        if(x<y){
            if(y-x<=k) cout<<y<<endl;
            else{
                int way1=y+(y-x);

                int way2=x+k+2*(y-x-k);
                cout<<min(way1, way2)<<endl;
            }
        }
        else{
            cout<<x<<endl;
        }
    }

    return 0;
}
