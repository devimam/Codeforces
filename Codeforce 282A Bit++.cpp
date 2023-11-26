#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int val=0;
    for(int t=1;t<=n;t++){
        string st;
        cin>>st;
        if(st=="X++" || st=="++X") ++val;
        else --val;
    }

    cout<<val<<endl;

    return 0;
}
