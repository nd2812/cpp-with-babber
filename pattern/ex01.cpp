#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<'\n';
    }
    // another pattern reverse of it
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<n-j+1<<" ";
        }
        cout<<'\n';
    }
    return 0;
}