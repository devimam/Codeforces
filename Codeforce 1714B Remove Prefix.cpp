#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

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

        reverse(v.begin(),v.end());

        set<int> s;
        for(int i=0;i<n;i++){
            int prevsize=s.size();
            s.insert(v[i]);
            if(s.size()==prevsize){
                break;
            }
        }
        cout<<n-s.size()<<endl;
    }

    return 0;
}
