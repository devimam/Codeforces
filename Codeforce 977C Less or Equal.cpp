#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    vector<unsigned long long int> v;
    for(int i=0;i<n;i++){
        unsigned long long int num;
        cin>>num;

        v.push_back(num);
    }

    sort(v.begin(), v.end());

    if(k+1<=n && v[k-1]!=v[k]){
        if(k-1>=0) cout<<v[k-1]<<endl;
        else if(v[k]==1) cout<<-1<<endl;
        else cout<<v[k]-1<<endl;
    }
    else if(k==n) cout<<v[n-1]<<endl;
    else cout<<-1<<endl;

    return 0;
}
