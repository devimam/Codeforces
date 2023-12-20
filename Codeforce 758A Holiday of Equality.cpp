#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int level=0;
    unsigned long long int res=0;
    for(int i=0;i<n;i++){
        unsigned long long int num;
        cin>>num;
        if(i==0) level=num;
        else{
            if(num<=level){
                res+=(level-num);
            }
            else{
                res+=((num-level)*(i));
                level=num;
            }
        }
    }
    cout<<res<<endl;

    return 0;
}
