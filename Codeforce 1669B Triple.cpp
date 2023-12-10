#include <iostream>
#include <map>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        map<int, int> m;
        int val=-1;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;

            if(m.find(num)==m.end()) m[num]=0;
            m[num]++;

            if(m[num]==3) val=num;
        }
        cout<<val<<endl;
    }

    return 0;
}
