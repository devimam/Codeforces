#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;

        double diff=abs(a-b)/2.0;

        cout<< ceil(diff/c)<<endl;

    }

    return 0;
}
