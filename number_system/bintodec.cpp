#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=0,ans=0;
    while(n!=0){
        int digit = n%10;
        ans+=digit * pow(2,i);
        i++;
        n/=10;
    }
    cout<<ans<<endl;
    return 0;
}