#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in;
    cin>>in;

    string res="";
    for(int i=0;i<in.size();i++){
        char ch=in[i];
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='Y' || ch=='y') continue;
        else{
            res+=".";
            if(ch>'A' && ch<='Z') res+='a'+(in[i]-'A');
            else res+=ch;
        }
    }
    cout<<res<<endl;

    return 0;
}
