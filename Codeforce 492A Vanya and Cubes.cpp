#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0, prevsum=0;
    int h=1;
    for(h=1;;h++){
        sum+=((h*(h+1))/2);
        if(sum>n) break;
    }
    cout<<h-1<<endl;

    return 0;
}
