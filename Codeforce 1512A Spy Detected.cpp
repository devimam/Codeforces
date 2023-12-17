#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        map<int,vector<int>> m;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            if(m.find(num)==m.end()){
                vector<int> v;
                m[num]=v;
            }
            m[num].push_back(j+1);
        }

        for(map<int,vector<int>>::iterator it=m.begin();it!=m.end();it++){
            if(it->second.size()==1) {cout<<it->second[0]<<endl;break;}
        }
    }

    return 0;
}
