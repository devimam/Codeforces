#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            if(r%2==0){
                cout<<"#";
            }
            else if((r+3)%4==0){
                if(c==m-1) cout<<"#";
                else cout<<".";
            }
            else if((r+1)%4==0){
                if(c==0) cout<<"#";
                else cout<<".";
            }
            if(c==m-1) cout<<endl;
        }
    }

    return 0;
}
