#include <iostream>

using namespace std;

bool is_beautiful(int yr){
    int arr[10]={0};
    while(yr!=0){
        int rem=yr%10;
        yr=yr/10;
        if(arr[rem]>0) return false;
        else arr[rem]=1;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1;;i++){
        if(is_beautiful(n+i)){
            cout<<n+i<<endl;
            break;
        }
    }

    return 0;
}
