#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    priority_queue<int, vector<int>, less<int> > pq;

    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        if(num<0) pq.push(num);
        if(pq.size()>m) pq.pop();
    }

    int sum=0;
    while(!pq.empty()){
        ///cout<<pq.top()<<endl;
        sum+=pq.top();
        pq.pop();
    }

    cout<<(-1)*sum<<endl;

    return 0;
}
