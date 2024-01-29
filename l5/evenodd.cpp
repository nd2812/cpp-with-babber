#include<bits/stdc++.h>
using namespace std;
void oddeven(int n){
    if(n%2==0){
        cout<<"even number"<<endl;
    }
    else{
        cout<<"odd number"<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    oddeven(n);
    return 0;
}