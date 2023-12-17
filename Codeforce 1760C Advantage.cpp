#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> v;
        priority_queue<int, vector<int>, less<int>> pq;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            v.push_back(num);
            pq.push(num);
        }

        for(int j=0;j<n;j++){
            if(j!=0) cout<<" ";

            if(pq.top()!=v[j]) cout<<v[j]-pq.top();
            else{
                pq.pop();
                cout<<v[j]-pq.top();
                pq.push(v[j]);
            }
        }
        cout<<endl;
    }

    return 0;
}
