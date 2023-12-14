#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> dislikes;
    for(int i=1;dislikes.size()<=1000;i++){
        if(i%10==3 || i%3==0) ;
        else dislikes.push_back(i);
    }


    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int num;
        cin>>num;

        cout<<dislikes[num-1]<<endl;
    }

    return 0;
}
