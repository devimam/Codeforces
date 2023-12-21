#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<long long int> v;
    for(int i=0;i<n;i++){
        long long int num;
        cin>>num;

        v.push_back(num);
    }

    long long int first=v[0];
    if(first<0){
        first*=(-1);
        for(int i=0;i<n;i++){
            v[i]+=first;
        }
    }

    for(int i=0;i<n;i++){
        long long int cur=v[i];
        if(i-1>=0 && i+1<n) cout<<min(v[i]-v[i-1],v[i+1]-v[i]);
        else if(i-1<0) cout<<v[i+1]-v[i];
        else if(i+1>=n) cout<<v[i]-v[i-1];

        cout<<" "<<max(v[n-1]-v[i], v[i]-v[0])<<endl;
    }


    return 0;
}
