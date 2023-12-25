#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int cnt=0;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            if(num==1 || num==3){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
