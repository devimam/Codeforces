#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> v;
        int num;
        cin>>num;
        v.push_back(num);
        int excludeind=0;

        int res=0;
        for(int j=1;j<n;j++){
            int num;
            cin>>num;
            res=res^num;
            v.push_back(num);
        }

        while(res!=v[excludeind]){
            int prev=v[excludeind];
            excludeind++;
            res=res^v[excludeind];
            res=res^prev;
        }

        cout<<res<<endl;

    }

    return 0;
}
