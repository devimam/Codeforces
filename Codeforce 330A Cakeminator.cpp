#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[11][11]={0};
    for(int r=0;r<n;r++){
        string s;
        cin>>s;

        for(int c=0;c<m;c++){
            if(s[c]=='S'){
                arr[r][c]=1;
            }
        }
    }

    ///rowwise
    int rcnt=0, ccnt=0;
    for(int c=0;c<m;c++){
        bool flag=true;
        for(int r=0;r<n;r++){
            if(arr[r][c]==1) {flag=false;break;}
        }
        if(flag) rcnt++;
    }

    ///colwise
    for(int r=0;r<n;r++){
        bool flag=true;
        for(int c=0;c<m;c++){
            if(arr[r][c]==1) {flag=false;break;}
        }
        if(flag) ccnt++;
    }

    cout<<rcnt*n+ccnt*m-rcnt*ccnt<<endl;

    return 0;
}
