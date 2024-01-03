#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        unsigned long long int n;
        cin>>n;

        n-=4;
        cout<< 26+((n*(2*11+(n-1)*2))/2) <<endl;
    }

    /*
    vector<unsigned long long int> arr;
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(26);
    for(int i=5;i<=mx;i++){
        arr.push_back(arr[i-1]+2*i+1);
    }

    for(int i=0;i<t;i++){
        cout<<arr[v[i]]<<endl;
    }
    */


    return 0;
}
