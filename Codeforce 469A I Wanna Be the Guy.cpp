#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin>>n;

    set<int> s;

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int num;
        cin>>num;
        s.insert(num);
    }

    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int num;
        cin>>num;
        s.insert(num);
    }

    if(s.size()==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
