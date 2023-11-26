#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n,-1);

    for(int i=0;i<n;i++){
        int num=0;
        cin>>num;

        v[num-1]=i;
    }

    for(int i=0;i<n-1;i++){
        cout<<v[i]+1<<" ";
    }
    cout<<v[n-1]+1<<endl;

    return 0;
}
