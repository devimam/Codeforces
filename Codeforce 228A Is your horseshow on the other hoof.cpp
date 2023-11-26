#include <iostream>
#include <set>

using namespace std;

int main()
{
    unsigned long int a,b,c,d;
    cin>>a>>b>>c>>d;

    set<unsigned long int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);

    cout<< 4-s.size() <<endl;

    return 0;
}
