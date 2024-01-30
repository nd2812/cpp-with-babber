#include<bits/stdc++.h>
using namespace std;

int GCD(int  a,int b){
    if(a<0){
        return 1;
    }
    if(a==0){
        return b;
    }
    return GCD(a-b,b);
}

int main() {
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<GCD(a,b)<<endl;
    }
    else{
        cout<<GCD(b,a)<<endl;
    }
    return 0;
}