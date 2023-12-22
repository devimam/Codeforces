#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        char ch='1';
        string type="1";
        int digit=1;
        while(type!=s){
            type+=ch;
            if(type.size()<=4){
                digit+=type.size();
            }
            else{
                ch+=1;
                string tmp(1,ch);
                type=tmp;
                digit+=1;
            }
        }
        cout<<digit<<endl;

    }

    return 0;
}
