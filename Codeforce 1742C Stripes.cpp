#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        char arr[8][8];
        for(int r=0;r<8;r++){
            for(int c=0;c<8;c++){
                char ch;
                cin>>ch;
                arr[r][c]=ch;
            }
        }

        bool allblue=false;
        for(int c=0;c<8;c++){
            if(arr[0][c]=='B'){
                bool flag=true;
                for(int r=0;r<8;r++){
                    if(arr[r][c]!='B') {flag=false;break;}
                }
                if(flag) {allblue=true;break;}
            }
        }
        if(allblue) cout<<"B"<<endl;
        else cout<<"R"<<endl;
    }

    return 0;
}
