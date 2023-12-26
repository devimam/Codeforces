#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        vector<char> v;
        bool flag=true;
        for(int j=0;j<6;j++){
            if(s[j]>='a' && s[j]<='z') v.push_back(s[j]);
            else{
                if(v.empty()) {
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
                else if(!v.empty() && find(v.begin(),v.end(),(char)(s[j]+32))==v.end()){
                    cout<<"NO"<<endl;
                    flag=false;
                    break;
                }
            }
        }

        /*
        for(int i=0;i<3;i++) cout<<v[i]<<" ";
        cout<<endl;
        */

        if(flag) cout<<"YES"<<endl;
    }

    return 0;
}
