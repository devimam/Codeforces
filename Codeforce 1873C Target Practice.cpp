#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int point=0;
        for(int r=0;r<10;r++){
            for(int c=0;c<10;c++){
                char ch;
                cin>>ch;

                if(ch=='X'){
                    if(r==0 || r==9 || c==0 || c==9) point+=1;
                    else if(r==1 || r==8 || c==1 || c==8) point+=2;
                    else if(r==2 || r==7 || c==2 || c==7) point+=3;
                    else if(r==3 || r==6 || c==3 || c==6) point+=4;
                    else if(r==4 || r==5 || c==4 || c==5) point+=5;
                }
            }
        }
        cout<<point<<endl;
    }

    return 0;
}
