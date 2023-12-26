#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<long long int> v;
        long long int sum=0;
        for(int j=0;j<n;j++){
            long long int num;
            cin>>num;

            v.push_back(num);
            sum+=num;
        }

        sort(v.begin(), v.end());
        reverse(v.begin(),v.end());

        long double maxavg1=sum*1.0/n;
        long double maxavg2=0;
        long double finalavg=INT_MIN;
        for(int j=0;j<n-1;j++){
            maxavg2=((maxavg2*j)+v[j])*1.0/(j+1);
            maxavg1=((maxavg1*(n-j))-v[j])*1.0/(n-j-1);
            ///cout<<maxavg1<<" "<<maxavg2<<endl;
            if(maxavg1+maxavg2>finalavg) finalavg=maxavg1+maxavg2;
        }
        printf("%.8Lf\n", finalavg);
    }

    return 0;
}
