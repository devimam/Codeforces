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

        vector<int> odd;
        vector<int> even;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;
            if(num%2==0) even.push_back(num);
            else odd.push_back(num);
        }

        for(int j=0;j<even.size();j++){
            if(j==0) cout<<even[j];
            else cout<<" "<<even[j];
        }

        for(int j=0;j<odd.size();j++){
            if(even.size()==0 && j==0) cout<<odd[j];
            else cout<<" "<<odd[j];
        }
        cout<<endl;
    }

    return 0;
}
