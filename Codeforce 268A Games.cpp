#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> home, guest;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;

        home.push_back(a);
        guest.push_back(b);
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        int homeclr=home[i];
        for(int j=0;j<n;j++){
            if(j==i) continue;
            if(homeclr==guest[j]) cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
