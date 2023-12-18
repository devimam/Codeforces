#include <iostream>

using namespace std;

int findQAQ(string sub, int ind, string main, int st, int en){
    if(ind>=3) return 1;

    if(st>en) return 0;

    int res=0;
    for(int i=st;i<=en;i++){
        if(sub[ind]==main[i]) res+=findQAQ(sub,ind+1,main,i+1,en);
    }
    return res;
}

int main()
{
    string s;
    cin>>s;


    cout<<findQAQ("QAQ",0,s,0,s.size()-1)<<endl;



    return 0;
}
