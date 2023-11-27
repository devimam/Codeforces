#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> evenind;
    vector<int> oddind;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        if(num%2==0) evenind.push_back(i+1);
        else oddind.push_back(i+1);
    }

    if(evenind.size()==1) cout<<evenind[0]<<endl;
    else cout<<oddind[0]<<endl;

    return 0;
}
