#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;

        cout<<24*60-a*60-b<<endl;
    }

    return 0;
}
