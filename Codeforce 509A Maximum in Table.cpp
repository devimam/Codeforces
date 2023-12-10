#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[11][11]={0};

    for(int i=0;i<n;i++){
        arr[0][i]=1;
        arr[i][0]=1;
    }

    for(int r=1;r<n;r++){
        for(int c=1;c<n;c++){
            arr[r][c]=arr[r-1][c]+arr[r][c-1];
        }
    }
    cout<<arr[n-1][n-1]<<endl;

    return 0;
}
