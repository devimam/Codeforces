#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int awin=0, draw=0, bwin=0;
    for(int i=1;i<=6;i++){
        int adiff=abs(i-a);
        int bdiff=abs(i-b);
        if(adiff==bdiff) draw++;
        else if(adiff>bdiff) bwin++;
        else awin++;
    }
    cout<<awin<<" "<<draw<<" "<<bwin<<endl;

    return 0;
}
