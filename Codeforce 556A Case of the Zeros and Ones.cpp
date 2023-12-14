#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    stack<int> res;
    for(int i=0;i<n;i++){
        int num=s[i]-'0';

        if(res.empty()) res.push(num);
        else{
            if(!res.empty() && res.top()!=num){
                res.pop();
            }
            else{
                res.push(num);
            }
        }
    }
    cout<<res.size()<<endl;

    return 0;
}
