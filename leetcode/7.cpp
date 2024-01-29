#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    float ans=0;
    while(x!=0){
        int digit = x%10;
        ans=(ans*10)+digit;
        if(ans>INT_MAX/10){
            return 0;
        }
        x/=10;
    }
    
    return 0;
}