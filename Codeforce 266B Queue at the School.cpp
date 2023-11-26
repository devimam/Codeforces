#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    string str;
    cin>>str;

    for(int i=0;i<t;i++){
        for(int j=0;j<n-1;){
            if(str[j]=='B' && str[j+1]=='G'){
                str[j+1]='B';
                str[j]='G';
                j+=2;
            }
            else j++;
        }
    }

    cout<<str<<endl;

    return 0;
}
