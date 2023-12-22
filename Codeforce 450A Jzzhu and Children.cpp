#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int mxelm=INT_MIN;
    vector<int> pos;
    for(int i=1;i<=n;i++){
        int num;
        cin>>num;

        num=ceil(num*1.0/m);

        if(num>mxelm){
            mxelm=num;
            pos.clear();
            pos.push_back(i);
        }
        else if(num==mxelm){
            pos.push_back(i);
        }
    }
    cout<<pos.back()<<endl;


    return 0;
}
