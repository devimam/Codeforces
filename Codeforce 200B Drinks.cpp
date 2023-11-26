#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    double sum=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        sum+=num;
    }

    cout<< sum/n <<endl;

    return 0;
}
