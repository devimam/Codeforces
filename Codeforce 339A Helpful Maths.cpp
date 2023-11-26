#include <iostream>
#include <string>

using namespace std;

int main()
{
    string eq;
    cin>>eq;

    string str1="", str2="", str3="";
    for(int i=0;i<eq.size();i++){
        if(eq[i]=='+') continue;

        if(eq[i]=='1'){
            if(str1=="") str1+="1";
            else str1+="+1";
        }
        else if(eq[i]=='2'){
            if(str2=="") str2+="2";
            else str2+="+2";
        }
        else{
            if(str3=="") str3+="3";
            else str3+="+3";
        }
    }

    ///cout<<str1<<" "<<str2<<" "<<str3<<endl;
    string res="";
    if(str1!="") res=str1;

    if(str2!=""){
        if(res=="") res=str2;
        else res=res+"+"+str2;
    }

    if(str3!=""){
        if(res=="") res=str3;
        else res=res+"+"+str3;
    }

    cout<<res<<endl;

    return 0;
}
