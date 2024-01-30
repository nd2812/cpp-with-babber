#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n<2){
        return false;
    }
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }

    }

    return true;
}

int main() {
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<" It is a Prime Number. "<<endl;
    }
    else{
        cout<<" It is not a Prime Number. "<<endl;
    }
    return 0;
}