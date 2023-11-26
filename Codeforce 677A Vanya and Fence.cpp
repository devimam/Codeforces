#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cin>>n>>h;

    int width=0;
    for(int i=0;i<n;i++){
        int fh;
        cin>>fh;

        width++;
        if(fh>h) width++;
    }
    cout<<width<<endl;

    return 0;
}
