#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int res=1;
    for(int i=2;i<n;i++){
        res=(res*i)%m;
    }
    cout<<res<<endl;
    return 0;
}