#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int num;
        cin>>num;

        int evencnt=num/2, oddcnt=num/2;
        if(num%2!=0) evencnt++;

        int displacecnt=0;
        int even=0, odd=0;

        for(int j=0;j<num;j++){
            int tmp;
            cin>>tmp;

            if(tmp%2!=j%2) displacecnt++;
            if(tmp%2==0) even++;
            else odd++;
        }

        if(even==evencnt && odd==oddcnt) cout<<displacecnt/2<<endl;
        else cout<<-1<<endl;
    }

    return 0;
}
