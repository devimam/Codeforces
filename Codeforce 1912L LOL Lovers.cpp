#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int lloaves=0, lonions=0;
    int rloaves=0, ronions=0;

    int totalloaves=0, totalonions=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L') totalloaves++;
        else totalonions++;
    }

    bool flag=false;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            lloaves++;
        }
        else{
            lonions++;
        }

        rloaves=totalloaves-lloaves;
        ronions=totalonions-lonions;

        if(lloaves+lonions>0 && rloaves+ronions>0 && lloaves!=rloaves && lonions!=ronions){
            cout<<i+1<<endl;
            flag=true;
            break;
        }
    }
    if(!flag) cout<<-1<<endl;

    return 0;
}
