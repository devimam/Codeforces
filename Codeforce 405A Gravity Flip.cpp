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

    cout<<v[0];
    for(int i=1;i<v.size();i++) cout<<" "<<v[i];
    cout<<endl;

    return 0;
}
