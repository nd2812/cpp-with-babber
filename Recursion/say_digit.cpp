#include<bits/stdc++.h>
using namespace std;

void digit(int n){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        return ;
    }
    
    digit(n/10);
    cout<<arr[n%10]<<" ";
}

int main() {
    int n;
    cin>>n;

    digit(n);
    cout<<endl;
    return 0;
}