#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        vector<int> v;
        for(int j=0;j<n;j++){
            int num;
            cin>>num;

            v.push_back(num);
        }

        for(int j=0;j<n;j++){
            int b;
            cin>>b;

            string s;
            cin>>s;

            int digit=v[j];

            for(int k=0;k<b;k++){
                char ch=s[k];

                if(ch=='D'){
                    digit++;
                    if(digit>9) digit=0;
                }
                else{
                    digit--;
                    if(digit<0) digit=9;
                }
            }
            if(j==0) cout<<digit;
            else cout<<" "<<digit;
        }
        cout<<endl;
    }

    return 0;
}
