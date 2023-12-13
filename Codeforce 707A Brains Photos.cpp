#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    bool iscolored=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char ch;
            cin>>ch;

            if(ch=='C' || ch=='M' || ch=='Y') iscolored=true;
        }
    }

    if(iscolored) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;

    return 0;
}
