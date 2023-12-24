#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n, d;
        cin>>n>>d;
        string dchar(1,d+'0');

        string s;
        cin>>s;


           bool flag=false;
            for(int j=0;j<n;j++){
                int curdigit=s[j]-'0';
                if(d>curdigit){
                    s.insert(j, dchar);
                    flag=true;
                    break;
                }
            }
            if(!flag) s+=dchar;

            cout<<s<<endl;

    }

    return 0;
}
