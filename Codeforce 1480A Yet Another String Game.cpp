#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        string res="";
        for(int j=0;j<s.size();j++){
            if(j%2==0){
                if(s[j]!='a') res+='a';
                else res+='b';
            }
            else{
                if(s[j]!='z') res+='z';
                else res+='y';
            }
        }

        cout<<res<<endl;

    }

    return 0;
}
