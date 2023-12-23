#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int x,a,b,c;
        cin>>x>>a>>b>>c;
        vector<int> v;
        v.push_back(-1);
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        if(v[x]!=0){
            int key=v[x];
            if(v[key]!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
