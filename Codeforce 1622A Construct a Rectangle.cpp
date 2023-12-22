#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;

        int mx1,mx2,mx3;
        if(a>b && a>c){
            mx1=a;
            if(b>c){
                mx2=b; mx3=c;
            }
            else{
                mx2=c; mx3=b;
            }
        }
        else if(b>a && b>c){
            mx1=b;
            if(a>c){
                mx2=a; mx3=c;
            }
            else{
                mx2=c; mx3=a;
            }
        }
        else{
            mx1=c;
            if(a>b){
                mx2=a; mx3=b;
            }
            else{
                mx2=b;mx3=a;
            }
        }

        if(mx2==mx3){
            if(mx1%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(mx1==mx2){
            if(mx3%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(mx1==mx3){
            if(mx2%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(mx1-mx2==mx3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }


    }

    return 0;
}
