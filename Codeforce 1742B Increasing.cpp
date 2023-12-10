#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        set<int> s;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            s.insert(num);
        }

        if(s.size()==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
