#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        sum+=num;
    }
    if(sum>0) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;

    return 0;
}
