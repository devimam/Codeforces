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

    int cnt=0;
    int first=0, last=n-1;
    while(first<=last){
        cnt++;

        int cap=4-v[last];
        last--;

        while(v[first]<=cap && first<=last){
            cap=cap-v[first];
            first++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
