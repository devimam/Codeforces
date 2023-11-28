#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;

        vector<int> v;
        for(int j=0;j<t;j++){
            int num;
            cin>>num;

            v.push_back(num);
        }

        sort(v.begin(), v.end());

        bool flag=true;
        for(int i=1;i<t;i++){
            if(v[i]-v[i-1]>1) {flag=false;break;}
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
