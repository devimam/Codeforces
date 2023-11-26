#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int rpos=0, cpos=0;

    for(int r=1;r<=5;r++){
        for(int c=1;c<=5;c++){
            int num;
            cin>>num;
            if(num==1){
                rpos=r;
                cpos=c;
            }
        }
    }
    cout<< abs(rpos-3)+abs(cpos-3)<<endl;
    return 0;
}
