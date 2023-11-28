#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;

    queue<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vp.push(make_pair(a,b));
    }

    int flag=true;
    while(vp.size()>0){
        int initsz=vp.size();

        if(s<=0) {flag=false;break;}

        queue<pair<int,int>> tmp;

        while(!vp.empty()){

            if(s>vp.front().first) {s+=vp.front().second;}
            else{
                tmp.push(vp.front());
            }
            vp.pop();
        }

        if(tmp.size()==initsz) {flag=false;break;}

        vp=tmp;
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
