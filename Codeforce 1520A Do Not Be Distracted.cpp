#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int num;
        cin>>num;

        string s;
        cin>>s;

        int arr[26]={0};
        int prev=s[0]-'A';
        arr[prev]=1;
        bool flag=true;
        for(int i=1;i<num;i++){
            int ch=s[i]-'A';
            if(ch==prev){
                continue;
            }
            else{
                if (arr[ch]==2) {flag=false;break;}
                arr[prev]=2;
                arr[ch]=1;
                prev=ch;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
