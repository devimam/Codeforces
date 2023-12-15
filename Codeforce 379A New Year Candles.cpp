#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int cnt=a;
    int leftout=a;
    while(leftout>=b){
        cnt+=(leftout/b);
        leftout=(leftout%b)+(leftout/b);
    }
    cout<<cnt<<endl;

    return 0;
}
