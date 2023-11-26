#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int cap=0, maxcap=0;
    for(int i=0;i<n;i++){
        int exit, entry;
        cin>>exit>>entry;

        cap-=exit;
        cap+=entry;

        if(maxcap<cap) maxcap=cap;
    }
    cout<<maxcap<<endl;

    return 0;
}
