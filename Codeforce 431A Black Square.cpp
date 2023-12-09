#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

    string s;
    cin>>s;

    int sum=0;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int ind=ch-'0'-1;
        sum+=arr[ind];
    }
    cout<<sum<<endl;

    return 0;
}
