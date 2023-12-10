#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> v;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            v.push_back(num);
        }

        sort(v.begin(), v.end());

        int mindiff=INT_MAX;
        for(int j=1;j<n;j++){
            if(abs(v[j]-v[j-1])<mindiff) mindiff=abs(v[j]-v[j-1]);
        }

        cout<<mindiff<<endl;
    }

    return 0;
}
