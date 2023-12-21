#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int rem=n%3;

        if(rem==0) cout<< n/3 <<" "<<(n/3)+1<<" "<<(n/3)-1<<endl;
        else if(rem==1) cout<< floor(n/3) <<" "<<floor(n/3)+2<<" "<<floor(n/3)-1<<endl;
        else cout<< floor(n/3)+1 <<" "<<floor(n/3)+2<<" "<<floor(n/3)-1<<endl;
    }

    return 0;
}
