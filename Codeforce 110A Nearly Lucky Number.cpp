#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in;
    cin>>in;

    int cnt=0;
    for(int i=0;i<in.size();i++){
        if(in[i]=='4' || in[i]=='7') cnt++;
    }

    if(cnt==0){
        cout<<"NO"<<endl;
        return 0;
    }

    int flag=0;
    while(cnt!=0){
        int rem=cnt%10;
        cnt=cnt/10;

        if(rem!=4 && rem!=7) {flag=1;break;}
    }

    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
