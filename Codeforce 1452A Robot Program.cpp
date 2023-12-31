#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;

        if(abs(x-y)<=1){
            cout<<x+y<<endl;
        }
        else{
            int diff=abs(x-y);

            cout<<x+y+diff-1<<endl;
        }

    }

    return 0;
}
