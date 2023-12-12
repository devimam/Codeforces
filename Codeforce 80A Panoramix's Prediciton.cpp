#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> prime(100,-1);

    for(int i=2;i<100;i++){
        if(prime[i]==-1) {
            prime[i]=1;
            int multiple=2;
            while(i*multiple<=100){
                prime[i*multiple]=0;
                multiple++;
            }
        }
    }

    int a,b;
    cin>>a>>b;

    if(prime[a]==1 && prime[b]==1){
        bool flag=false;
        for(int i=a+1;i<b;i++){
            if(prime[i]==1){
                flag=true;
                break;
            }
        }
        if(flag==false) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}
