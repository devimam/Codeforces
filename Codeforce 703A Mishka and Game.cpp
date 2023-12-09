#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int mcnt=0, ccnt=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a>b) mcnt++;
        else if(a<b) ccnt++;
    }

    if(mcnt==ccnt) cout<<"Friendship is magic!^^"<<endl;
    else if(mcnt>ccnt) cout<<"Mishka"<<endl;
    else cout<<"Chris"<<endl;

    return 0;
}
