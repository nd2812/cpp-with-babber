#include<bits/stdc++.h>
using namespace std;

// int & func(int a){
//     int num=a;
//     int &ans=num;
//     return ans;
// }//bad practice

void update1 (int n){
    n++;
}
void update2 (int &n){
    n++;
}

int main() {
    // int i=5;

    // // create a ref variable

    // int &j =i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

    int n=5;
    cout<<"Before "<<n<<endl;
    update1(n);//pass by value
    update2(n);//pass by refrence
    cout<<"After "<<n<<endl;
    return 0;
}