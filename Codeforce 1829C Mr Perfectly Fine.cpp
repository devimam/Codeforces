#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int first=-1, second=-1, both=-1;
        for(int j=0;j<n;j++){
            int time;
            string s;
            cin>>time>>s;

            if(s=="11"){
                if(both==-1) both=time;
                else{
                    if(both>time) both=time;
                }
            }
            else if(s=="01"){
                if(second==-1) second=time;
                else{
                    if(second>time) second=time;
                }
            }
            else if(s=="10"){
                if(first==-1) first=time;
                else{
                    if(first>time) first=time;
                }
            }
        }

        if((first==-1 || second==-1) && both==-1) cout<<-1<<endl;
        else{
            if(first!=-1 && second!=-1){
                if(both==-1) cout<<first+second<<endl;
                else cout<<min(both, first+second)<<endl;
            }
            else if((first==-1 || second==-1) && both!=-1){
                cout<<both<<endl;
            }
        }

    }

    return 0;
}
