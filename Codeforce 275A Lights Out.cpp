#include <iostream>

using namespace std;

int main()
{
    int arr[3][3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int num;
            cin>>num;

            arr[i][j]+=num;

            if(num>0){
                if(i-1>=0) arr[i-1][j]+=num;
                if(i+1<3) arr[i+1][j]+=num;
                if(j-1>=0) arr[i][j-1]+=num;
                if(j+1<3) arr[i][j+1]+=num;
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]%2==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
