#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;


        string res="";
        string prev;
        cin>>prev;
        res+=prev[0];
        for(int j=1;j<n-2;j++){
            string cur;
            cin>>cur;

            if(prev[1]==cur[0]) res+=prev[1];
            else {
                res+=prev[1];
                res+=cur[0];
            }

            prev=cur;
        }
        res+=prev[1];

        if(res.size()<n) res+=prev[1];

        cout<<res<<endl;

    }

    return 0;
}
