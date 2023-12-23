#include <iostream>

using namespace std;

int main()
{
    int n,b,d;
    cin>>n>>b>>d;

    int cap=0;
    int wastecnt=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        if(num>b) continue;
        else{
            cap+=num;
            if(cap>d){
                wastecnt++;
                cap=0;
            }
        }
    }
    cout<<wastecnt<<endl;

    return 0;
}
