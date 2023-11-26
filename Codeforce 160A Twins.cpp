#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v;
    int sum=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        sum+=num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int cursum=0;
    int i=0;
    for(i=0;i<n;i++){
        cursum+=v[i];
        if(cursum>(sum-cursum)) break;
    }
    cout<<i+1<<endl;

    return 0;
}
