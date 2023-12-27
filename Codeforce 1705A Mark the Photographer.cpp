#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;

        vector<int> v;
        for(int j=0;j<2*n;j++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());

        bool isok=true;
        for(int j=0;j<n;j++){
            if(v[j+n]-v[j]>=x) continue;
            else {isok=false;break;}
        }
        if(isok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
