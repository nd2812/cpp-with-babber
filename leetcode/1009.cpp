#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int count =0,a=n,ans,b;
    while(a!=0){
        a=a>>1;
        count++;
    }
    b=pow(2,count);
    ans = (~n)&((b)-1);
    cout<<ans<<endl;
    return 0;
}