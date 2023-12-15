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

        string s;
        cin>>s;

        vector<int> arr(26,0);
        int cnt=0;
        for(int j=0;j<n;j++){
            int ind=s[j]-'A';
            if(arr[ind]==0) {cnt+=2;arr[ind]++;}
            else {cnt+=1;arr[ind]++;}
        }
        cout<<cnt<<endl;
    }

    return 0;
}
