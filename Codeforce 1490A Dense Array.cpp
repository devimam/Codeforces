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
        for(int j=0;j<n;j++){
            int num;
            cin>>num;
            v.push_back(num);
        }

        for(int j=1;j<v.size();){
            int mn=min(v[j],v[j-1]);
            int mx=max(v[j],v[j-1]);

            if(mx<=2*mn) j++;
            else{
                v.insert(v.begin()+j, 2*mn);
            }
        }
        cout<<v.size()-n<<endl;
    }

    return 0;
}
