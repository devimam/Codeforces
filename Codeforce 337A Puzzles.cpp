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

    vector<int> diff;
    for(int i=1;i<m;i++){
        diff.push_back(v[i]-v[i-1]);
        ///cout<<v[i]-v[i-1]<<endl;
    }

    int mindiff=INT_MAX;
    for(int i=0;i<m-1;i++){
        int last=i-1+n-1;
        if(last>=m-1) break;

        int sum=0;
        for(int j=i;j<=last;j++){
            sum+=diff[j];
        }
        if(sum<mindiff) mindiff=sum;
    }

    cout<<mindiff<<endl;

    return 0;
}
