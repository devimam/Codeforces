#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int num;
        cin>>num;

        vector<int> seq;
        for(int j=0;j<num;j++){
            int tmp;
            cin>>tmp;

            seq.push_back(tmp);
        }

        int st=0, en=num-1;
        while(st<=en){
            ///cout<<st<<" "<<en<<endl;
            if(st==0) cout<<seq[st];
            else cout<<" "<<seq[st];

            if(st!=en) {cout<<" "<<seq[en];en--;}
            st++;
        }
        cout<<endl;
    }

    return 0;
}
