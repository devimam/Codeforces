#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        int mn=INT_MAX, mnind=-1;
        int mx=INT_MIN, mxind=-1;

        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            if(num<mn){
                mn=num;
                mnind=j;
            }

            if(num>mx){
                mx=num;
                mxind=j;
            }
        }

        int indmn=min(mnind, mxind);
        int indmx=max(mnind, mxind);

        int leftdist1=indmn+1;
        int rightdist1=n-indmn;

        int leftdist2=indmx+1;
        int rightdist2=n-indmx;

        int way1=max(leftdist1, leftdist2);
        int way2=max(rightdist1, rightdist2);
        int way3=leftdist1+rightdist2;

        cout<< min(way1, min(way2, way3)) <<endl;
    }

    return 0;
}
