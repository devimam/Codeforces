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
                cin>>arr[r][c];
            }
        }

        for(int c=0;c<8;c++){
            string res="";
            for(int r=0;r<8;r++){
                if(arr[r][c]!='.') res+=arr[r][c];
            }
            if(res!="") {cout<<res<<endl;break;}
        }
    }

    return 0;
}
