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

        bool flag=false;
        for(int r=1;r<7;r++){
            for(int c=1;c<7;c++){
                if(arr[r][c]=='#'){
                    if(arr[r-1][c-1]=='#' && arr[r-1][c+1]=='#' && arr[r+1][c-1]=='#' && arr[r+1][c+1]=='#'){
                        cout<<r+1<<" "<<c+1<<endl;
                        flag=true;
                        break;
                    }
                }
            }
            if(flag) break;
        }
    }

    return 0;
}
