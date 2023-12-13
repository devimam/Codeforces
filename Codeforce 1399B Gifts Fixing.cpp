#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<unsigned long long int> a;
        unsigned long long int mina=INT_MAX;
        for(int j=1;j<=n;j++){
            unsigned long long int num;
            cin>>num;

            a.push_back(num);
            if(num<mina) mina=num;
        }

        vector<unsigned long long int> b;
        unsigned long long int minb=INT_MAX;
        for(int j=1;j<=n;j++){
            int num;
            cin>>num;

            b.push_back(num);
            if(num<minb) minb=num;
        }

        unsigned long long int movecnt=0;
        for(int j=0;j<n;j++){
            unsigned long long int eata=a[j]-mina;

            unsigned long long int eatb=b[j]-minb;

            unsigned long long int botheat=min(eata,eatb);
            movecnt+=botheat;
            movecnt+=(max(eata,eatb)-botheat);
        }

        cout<<movecnt<<endl;
    }

    return 0;
}
