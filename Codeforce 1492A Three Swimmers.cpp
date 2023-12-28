#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        unsigned long long int p,a,b,c;
        cin>>p>>a>>b>>c;

        unsigned long long int mntime=max(a,max(b,c));
        mntime=min(mntime, ((p/a)+(p%a!=0?1:0))*a-p);
        mntime=min(mntime, ((p/b)+(p%b!=0?1:0))*b-p);
        mntime=min(mntime, ((p/c)+(p%c!=0?1:0))*c-p);

        cout<<mntime<<endl;

    }

    return 0;
}
