#include <iostream>
#include <vector>
#include <algorithm>

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
        vector<int> vs(v.begin(), v.end());
        sort(vs.begin(),vs.end());

        bool flag=true;
        for(int j=0;j<n;j++){
            if(v[j]%2==vs[j]%2) continue;
            else{
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
