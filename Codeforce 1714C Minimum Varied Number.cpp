#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int sum;
        cin>>sum;

        string res="";
        int top=9;
        while(sum>0){

            while(sum-top<0){
                top--;
            }
            string dig(1,'0'+top);
            res=dig+res;
            sum-=top;
            top--;

        }
        cout<<res<<endl;
    }

    return 0;
}
