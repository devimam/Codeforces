#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;

    string s;
    cin>>s;

    vector<int> dp;
    int sum=0;
    for(int i=0;i<n;i++){
        char ch=s[i];
        int freq=ch-'a'+1;
        sum+=freq;
        dp.push_back(sum);
    }

    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;

        int val2=dp[b-1];
        int val1=0;
        int ind1=a-1-1;
        if(ind1>=0) val1=dp[ind1];

        cout<<val2-val1<<endl;

    }

    return 0;
}
