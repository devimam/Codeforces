#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        string res="";
        res+=s[0];
        for(int i=1;i<s.size()-1;i+=2){
            res+=s[i];
        }
        int lst=s.size()-1;
        res+=s[lst];
        cout<<res<<endl;
    }

    return 0;
}
