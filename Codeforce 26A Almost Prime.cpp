#include <iostream>
#include <cmath>
#include <set>

using namespace std;

bool isprime(int a){
    for(int i=2;i<=floor(sqrt(a));i++){
        if(a%i==0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    int cnt=0;
    for(int j=6;j<=n;j++){
        set<int> divisors;
        for(int i=2;i<=floor(sqrt(j));i++){
            if(j%i==0){
                if(isprime(i)) divisors.insert(i);
                if(isprime(j/i)) divisors.insert(j/i);
            }
        }
        if(divisors.size()==2) cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
