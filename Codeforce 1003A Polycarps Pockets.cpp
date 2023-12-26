#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin>>n;

    map<int,int> m;
    int maxfreq=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        if(m.find(num)==m.end()) m[num]=0;
        m[num]++;

        if(m[num]>maxfreq) maxfreq=m[num];
    }
    cout<<maxfreq<<endl;

    return 0;
}
