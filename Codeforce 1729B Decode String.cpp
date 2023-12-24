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

        string res="";
        for(int j=n-1;j>=0;){
            char ch='a'-1+(s[j]-'0');
            if(s[j]=='0'){
                int digit1=(s[j-1]-'0');
                int digit2=(s[j-2]-'0');
                int finalval=digit2*10+digit1;
                ///cout<<digit1<<" "<<digit2<<" "<<finalval<<endl;
                ch='a'-1+finalval;
                j-=2;
            }

            res=ch+res;

            j--;
        }

        cout<<res<<endl;

    }

    return 0;
}
