#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    vector<int> v;
    for(int i=0;i<m;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    int mindiff=INT_MAX;
    for(int i=0;i<m;i++){
        int last=i+n-1;
        if(last>=m) break;


        if(v[last]-v[i]<mindiff) mindiff=v[last]-v[i];
    }

    cout<<mindiff<<endl;

    return 0;
}
