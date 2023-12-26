#include <iostream>

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

        string res=s.substr(0,n);
        for(int j=1;j<n;j++){
            string res1=s.substr(j,n);
            for(int k=0;k<n;k++){
                if(res[k]==res1[k]) continue;
                else res=res.substr(0,k)+"0"+res.substr(k+1);
            }
        }
        cout<<res<<endl;
    }

    return 0;
}
