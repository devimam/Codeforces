#include <iostream>
#include <utility>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        ///vector<pair<int,int>> v;
        int resa=-1, quality=INT_MIN;
        for(int j=0;j<n;j++){
            int a,b;
            cin>>a>>b;

            if(a<=10 && b>=quality){
                quality=b;
                resa=j;
            }
            ///v.push_back(make_pair(a,b));
        }
        cout<<resa+1<<endl;
    }

    return 0;
}
