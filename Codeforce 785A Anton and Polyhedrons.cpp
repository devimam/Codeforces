#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, int> m;
    m["Tetrahedron"]=4;
    m["Cube"]=6;
    m["Octahedron"]=8;
    m["Dodecahedron"]=12;
    m["Icosahedron"]=20;

    int n;
    cin>>n;

    int cnt=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        cnt+=m[s];
    }
    cout<<cnt<<endl;

    return 0;
}
