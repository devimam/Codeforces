#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        for(int j=0;j<n;j++){
            int num;
            cin>>num;
        }

        int rem=10-n;

        cout<< (rem*(rem-1))*6/2 <<endl;
    }

    return 0;
}
