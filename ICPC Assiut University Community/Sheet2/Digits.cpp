#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        while(n){
            cout<<(n%10)<<" ";
            n/=10;
        }
         cout<<endl;
    }


}
