#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s1,s2;
    cin>>s1>>s2;

    int cnt=0;
    for(int i=0;i<n;i++){
        int way1=abs(s1[i]-s2[i]);
        int way2=10-way1;
        cnt+=min(way1,way2);
    }
    cout<<cnt<<endl;

    return 0;
}
