#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in;
    cin>>in;

    string upper="", lower="";
    int uppercnt=0, lowercnt=0;

    for(int i=0;i<in.size();i++){
        if(in[i]>='A' && in[i]<='Z'){
            uppercnt++;
            upper+=in[i];
            lower+='a'+(in[i]-'A');
        }
        else{
            lowercnt++;
            lower+=in[i];
            upper+='A'+(in[i]-'a');
        }
    }

    if(uppercnt>lowercnt) cout<<upper<<endl;
    else cout<<lower<<endl;

    return 0;
}
