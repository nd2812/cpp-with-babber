#include<bits/stdc++.h>
using namespace std;

// void func(int a,int b){
//     a++;
//     b++;
//     cout<<a<<b<<endl;
// }

inline int getMax(int& a,int& b){
    return (a>b)?a:b;
}//inline use less memory for repeatative function call

int main() {
    int a=1,b=2;

    int ans=0;
    // if(a>b){
    //     ans=a;
    // }
    // else{
    //     ans=b;
    // }
 
    cout<<getMax(a,b)<<endl;
    a=a+3;
    b=b+1;
    cout<<getMax(a,b)<<endl;


    // func(a,b);
    return 0;
}