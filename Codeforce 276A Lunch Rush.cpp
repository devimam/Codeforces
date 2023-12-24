#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool sortfn(pair<unsigned long long int, unsigned long long int> p1, pair<unsigned long long int, unsigned long long int> p2){
    if(p1.first*1.0/p1.second > p2.first*1.0/p2.second) return true;
    else return false;
}

int main()
{
    unsigned long long int n,k;
    cin>>n>>k;

    vector<pair<unsigned long long int, unsigned long long int>> v;
    for(int i=0;i<n;i++){
        unsigned long long int f,t;
        cin>>f>>t;

        v.push_back(make_pair(f,t));
    }

    ///sort(v.begin(),v.end(), sortfn);

    int maxfun=INT_MIN;
    for(int i=0;i<n;i++){
        int fun=0;
        if(v[i].second<=k) fun=v[i].first;
        else fun=(v[i].first-(v[i].second-k));

        if(fun>maxfun) maxfun=fun;
    }
    cout<<maxfun<<endl;

    return 0;
}
