#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int cnt=0;

        bool flag=false;
        int kcnt=0;
        for(int j=0;j<s.size();j++){
            if(!flag){
                if(s[j]=='W') continue;
                else{
                    flag=true;
                    kcnt++;
                    cnt++;
                }
            }
            else{
                if(kcnt<k){
                    kcnt++;
                }
                else{
                    kcnt=0;
                    if(s[j]=='W'){
                        flag=false;
                        kcnt=0;
                    }
                    else{
                        kcnt=1;
                        cnt++;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
