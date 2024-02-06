#include<bits/stdc++.h>
using namespace std;
// bad to function  beacause any function can change it and it also change in other function 
int score =15;

void a(int &i){
    cout<<score<<" in a"<<endl;
    cout<<i<<endl;
    // b(i);
}

void b(int &i){
    cout<<score<<" in b"<<endl;
    cout<<i<<endl;
}

int main() {
     cout<<score<<" in main"<<endl;
    int i=5;
    a(i);
    b(i);

    // {//local variable
    //     int i=2;
    //     cout<<i<<endl;
    // }

    return 0;
}