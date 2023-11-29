#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int remtime=240-k;

    int solvecnt=0;
    for(int i=1;i<=n;i++){
        remtime-=(5*i);
        if(remtime>=0) solvecnt++;
        else break;
    }
    cout<<solvecnt<<endl;

    return 0;
}
