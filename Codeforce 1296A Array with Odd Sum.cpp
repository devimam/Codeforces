#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int oddcnt=0;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            if(num%2!=0) oddcnt++;
        }
        int evencnt=n-oddcnt;
        if(oddcnt!=0 && oddcnt%2!=0) cout<<"YES"<<endl;
        else if(oddcnt>0 && evencnt>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
