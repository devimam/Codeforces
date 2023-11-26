#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v({100,20,10,5,1});
    unsigned long int n;
    cin>>n;

    int cnt=0;
    int ind=0;
    while(n!=0){
        if(n<v[ind]) ind++;

        cnt+=(n/v[ind]);
        n=n%v[ind];
    }
    cout<<cnt<<endl;

    return 0;
}
