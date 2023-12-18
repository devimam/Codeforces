#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        char prev=' ';
        string org="";
        for(int j=0;j<n;j++){
            char ch;
            cin>>ch;
            if(prev==' ') {prev=ch;org+=ch;}
            else{
                if(ch==prev){
                    prev=' ';
                }
            }
        }
        cout<<org<<endl;

    }

    return 0;
}
