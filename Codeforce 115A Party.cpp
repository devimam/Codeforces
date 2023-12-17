#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int parentheight(int curnode, vector<int> & height, vector<int> & parent){
    if(height[curnode]>=1) return height[curnode];

    int curparent=parent[curnode];
    if(curparent==-1) height[curnode]=1;
    else height[curnode]=parentheight(curparent, height, parent)+1;

    return height[curnode];
}

int main()
{
    int n;
    cin>>n;

    vector<int> parent;
    parent.push_back(-1);
    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        parent.push_back(num);
    }

    vector<int> height(n+1,0);
    for(int i=1;i<=n;i++){
        if(height[i]>=1) continue;

        int myparent=parent[i];
        if(myparent==-1) height[i]=1;
        else height[i]=parentheight(myparent, height, parent)+1;

    }

    int max_val=*max_element(height.begin(), height.end());

    cout<<max_val<<endl;

    return 0;
}
