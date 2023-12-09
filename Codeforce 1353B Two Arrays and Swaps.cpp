#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;

        priority_queue<int, vector<int>, greater<int>> pq1;
        priority_queue<int, vector<int>, less<int>> pq2;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            pq1.push(num);
        }

        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            pq2.push(num);
        }

        for(int j=0;j<k;j++){
            if(pq1.top()>=pq2.top()) break;

            int tmp=pq1.top();
            pq1.pop();
            pq1.push(pq2.top());
            pq2.pop();
            pq2.push(tmp);
        }

        int sum=0;
        for(int j=0;j<n;j++){
            sum+=pq1.top();
            pq1.pop();
        }
        cout<<sum<<endl;
    }

    return 0;
}
