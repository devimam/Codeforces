#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    bool flag=false;
    string res="";
    for(int i=0;i<t;i++){
        char a,b,e,c,d;
        cin>>a>>b>>e>>c>>d;

        if(!flag && a==b && a=='O'){
            res+="++";
            flag=true;
        }
        else {res+=a;res+=b;}

        res+="|";

        if(!flag && c==d && c=='O'){
            res+="++";
            flag=true;
        }
        else {res+=c;res+=d;}

        res+="\n";
    }
    if(!flag) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<res<<endl;
    }

    return 0;
}
