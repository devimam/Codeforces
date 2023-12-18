#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    vector<int> a;
    a.push_back(-1);
    for(int i=1;i<n;i++){
        int num;
        cin>>num;

        a.push_back(num);
    }

    map<int, vector<int>> adj_list;
    for(int i=1;i<n;i++){
        if(adj_list.find(i)==adj_list.end()){
            vector<int> v;
            adj_list[i]=v;
        }

        adj_list[i].push_back(i+a[i]);
    }

    vector<int> color(n,-1);
    queue<int> q;
    q.push(1);
    bool flag=false;
    while(!q.empty()){
        int curnode=q.front(); q.pop();
        color[curnode]=1;

        vector<int> adjacent=adj_list[curnode];
        for(int i=0;i<adjacent.size();i++){
            int adjnode=adjacent[i];
            if(adjnode==t) {flag=true;break;}
            if(color[adjnode]==-1) q.push(adjnode);
        }
        if(flag) break;

        color[curnode]=2;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
