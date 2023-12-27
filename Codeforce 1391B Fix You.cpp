#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;

        int cnt=0;
        for(int r=0;r<n;r++){
            for(int c=0;c<m;c++){
                char ch;
                cin>>ch;
                if(r==n-1 && ch=='D') cnt++;
                else if(c==m-1 && ch=='R') cnt++;
            }

        }
        cout<<cnt<<endl;
    }

    return 0;
}
