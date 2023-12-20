#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int n,m,x;
        cin>>n>>m>>x;

        unsigned long long int col=ceil(x*1.0/n);
        unsigned long long int row=x-(col-1)*n;

        ///cout<<row<<" "<<col<<endl;

        cout<< (row-1)*m+col<<endl;
    }

    return 0;
}
