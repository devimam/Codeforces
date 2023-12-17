#include <iostream>
#include <map>
#include <climits>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int c=0;c<t;c++){
        int n;
        cin>>n;

        map<int,int> m;

        for(int i=0;i<n;i++){
            int num;
            cin>>num;

            if(m.find(num)==m.end()) m[num]=0;
            m[num]++;
        }

        int cnt=0;
        for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
            ///cout<<it->first<<" "<<it->second<<endl;
            if(it->second>1){
                cnt+=(it->second-1);
            }
        }
        if(cnt%2!=0) cnt++;

        cout<<n-cnt<<endl;
    }

    return 0;
}
