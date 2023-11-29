#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        v.push_back(num);
    }

    int sereja=0, dima=0;
    int st=0, en=n-1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(v[st]>v[en]){
                sereja+=v[st];
                st++;
            }
            else
            {
                sereja+=v[en];
                en--;
            }
        }
        else{
            if(v[st]>v[en]){
                dima+=v[st];
                st++;
            }
            else
            {
                dima+=v[en];
                en--;
            }
        }
    }

    cout<<sereja<<" "<<dima<<endl;

    return 0;
}
