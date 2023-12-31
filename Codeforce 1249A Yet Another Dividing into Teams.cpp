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

        sort(v.begin(), v.end());

        int cnt=0;
        while(true){
            vector<int> rest;
            int mx=v[0];

            for(int j=1;j<v.size();j++){
                if(v[j]-mx<=1) rest.push_back(v[j]);
                else mx=v[j];
            }
            ///cout<<rest.size()<<endl;

            if(rest.empty()) {++cnt;break;}
            else {v=rest;++cnt;}
        }
        cout<<cnt<<endl;

    }

    return 0;
}
