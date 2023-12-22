#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s1,s2;
        cin>>s1>>s2;

        int lind1=s1.size()-1;
        int lind2=s2.size()-1;
        if(s1[lind1]=='S' && (s2[lind2]=='M'||s2[lind2]=='L')) cout<<"<"<<endl;

        else if(s1[lind1]=='M' && s2[lind2]=='S') cout<<">"<<endl;
        else if(s1[lind1]=='M' && s2[lind2]=='M') cout<<"="<<endl;
        else if(s1[lind1]=='M' && s2[lind2]=='L') cout<<"<"<<endl;

        else if(s1[lind1]=='L' && (s2[lind2]=='M'||s2[lind2]=='S')) cout<<">"<<endl;

        else if(s1[lind1]=='S' && s2[lind2]=='S'){
            int xcnt1=s1.size()-1;
            int xcnt2=s2.size()-1;

            if(xcnt1>xcnt2) cout<<"<"<<endl;
            else if(xcnt1==xcnt2) cout<<"="<<endl;
            else cout<<">"<<endl;
        }
        else if(s1[lind1]=='L' && s2[lind2]=='L'){
            int xcnt1=s1.size()-1;
            int xcnt2=s2.size()-1;

            if(xcnt1>xcnt2) cout<<">"<<endl;
            else if(xcnt1==xcnt2) cout<<"="<<endl;
            else cout<<"<"<<endl;
        }

    }

    return 0;
}
