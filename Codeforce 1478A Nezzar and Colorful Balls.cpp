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

        map<int,int> m;
        int mxcnt=0;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            if(m.find(num)==m.end()) m[num]=0;
            m[num]++;
            if(m[num]>mxcnt) mxcnt=m[num];
        }

        cout<<mxcnt<<endl;

    }

    return 0;
}
