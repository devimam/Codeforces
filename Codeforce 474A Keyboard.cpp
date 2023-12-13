#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<char, vector<char>> m;

    m['q']=vector<char> ({' ', 'w'});
    m['w']=vector<char> ({'q', 'e'});
    m['e']=vector<char> ({'w', 'r'});
    m['r']=vector<char> ({'e', 't'});
    m['t']=vector<char> ({'r', 'y'});
    m['y']=vector<char> ({'t', 'u'});
    m['u']=vector<char> ({'y', 'i'});
    m['i']=vector<char> ({'u', 'o'});
    m['o']=vector<char> ({'i', 'p'});
    m['p']=vector<char> ({'o', ' '});

    m['a']=vector<char> ({' ', 's'});
    m['s']=vector<char> ({'a', 'd'});
    m['d']=vector<char> ({'s', 'f'});
    m['f']=vector<char> ({'d', 'g'});
    m['g']=vector<char> ({'f', 'h'});
    m['h']=vector<char> ({'g', 'j'});
    m['j']=vector<char> ({'h', 'k'});
    m['k']=vector<char> ({'j', 'l'});
    m['l']=vector<char> ({'k', ';'});
    m[';']=vector<char> ({'l', ' '});

    m['z']=vector<char> ({' ', 'x'});
    m['x']=vector<char> ({'z', 'c'});
    m['c']=vector<char> ({'x', 'v'});
    m['v']=vector<char> ({'c', 'b'});
    m['b']=vector<char> ({'v', 'n'});
    m['n']=vector<char> ({'b', 'm'});
    m['m']=vector<char> ({'n', ','});
    m[',']=vector<char> ({'m', '.'});
    m['.']=vector<char> ({',', '/'});
    m['/']=vector<char> ({'.', ' '});



    string s1, s2;
    cin>>s1>>s2;

    string res="";
    for(int i=0;i<s2.size();i++){
        char ch=s2[i];
        res+=(m[ch][s1=="R"?0:1]);
    }
    cout<<res<<endl;

    return 0;
}
