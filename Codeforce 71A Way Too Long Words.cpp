#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int t=1;t<=n;t++){
        string word;
        cin>>word;
        if(word.size()<=10){
            cout<<word<<endl;
        }
        else{
            char first=word[0];
            char last=word[word.size()-1];
            cout<<first<<word.size()-2<<last<<endl;
        }
    }

    return 0;
}
