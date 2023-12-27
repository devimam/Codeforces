#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    int diff=0;
    for(int i=0;i<n;i+=2){
        diff+=(v[i+1]-v[i]);
    }
    cout<<diff<<endl;

    return 0;
}
