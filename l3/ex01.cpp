// given input n, return the difference b/w protducts and sum of digits
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int sum=0;
    int product =1;
    while(n!=0){
        int digit =n%10;
        sum+=digit;
        product*=digit;
        n=n/10;
    }
    cout<<product-sum<<endl;
    return 0;
}