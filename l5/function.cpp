#include<bits/stdc++.h>
using namespace std;

int power(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}
int main() {
    // pow(a,b)
    int ans=power();
    cout<<ans<<endl;
    return 0;
}