#include <iostream>

using namespace std;

int main()
{
    string s1,s2,s3,s4,s5,s6;
    cin>>s1;

    cin>>s2>>s3>>s4>>s5>>s6;

    if(s1[1]==s2[1] || s1[1]==s3[1] || s1[1]==s4[1] || s1[1]==s5[1] || s1[1]==s6[1]){
        cout<<"YES"<<endl;
    }
    else if(s1[0]==s2[0] || s1[0]==s3[0] || s1[0]==s4[0] || s1[0]==s5[0] || s1[0]==s6[0]){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
