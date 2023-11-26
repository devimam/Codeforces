#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<char> s;

    string st;
    getline(cin, st);

    ///cout<<st.size()-1<<endl;
    for(int i=1;i<st.size()-1;i+=3){
        s.insert(st[i]);
        ///cout<<st[i]<<endl;
    }

    cout<<s.size()<<endl;

    return 0;
}
