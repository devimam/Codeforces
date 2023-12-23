#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;

        vector<vector<char>> v;
        for(int r=0;r<n;r++){
            vector<char> v1(m,' ');
            v.push_back(v1);
            for(int c=0;c<m;c++){
                char ch;
                cin>>ch;
                v[r][c]=ch;
            }
        }


        string match="vika";
        int ind=-1;
        for(int c=0;c<m;c++){
            if(ind==3) break;
            for(int r=0;r<n;r++){
                char ch=v[r][c];
                if(v[r][c]==match[ind+1]){
                    ind++;
                    break;
                }
            }
        }

        if(ind==3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
