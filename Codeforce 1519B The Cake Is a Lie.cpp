#include <iostream>
#include <vector>

using namespace std;

int visit(int r, int c, int curcost, int n, int m, int k, vector<vector<int>> &globalarr){
    ///cout<<r<<" "<<c<<" "<<curcost<<endl;
    if(globalarr[r][c]!=0) return globalarr[r][c];
    else{
        if(r>n || c>m) globalarr[r][c]=-1;
        else if(curcost>k) globalarr[r][c]=-1;
        else if(r==n && c==m){
            if(curcost==k) globalarr[r][c]=1;
            else globalarr[r][c]=-1;
        }
        else{
            int res1=visit(r+1, c, curcost+c, n,m,k,globalarr);
            int res2=visit(r, c+1, curcost+r, n,m,k,globalarr);

            if(res1==1) globalarr[r][c]=1;
            else if(res2==1) globalarr[r][c]=1;
            else globalarr[r][c]=-1;
        }
        ///cout<<globalarr[r][c]<<endl;
        return globalarr[r][c];
    }
}

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        vector<vector<int>> globalarr;
        for(int j=0;j<103;j++){
            vector<int> v(103,0);
            globalarr.push_back(v);
        }
        ///cout<<globalarr.size()<<" "<<globalarr[0].size()<<endl;

        int n,m,k;
        cin>>n>>m>>k;


        visit(1,1,0,n,m,k,globalarr);
        if(globalarr[n][m]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
