// #include<bits/stdc++.h>
#include<iostream>
#include<array>
using namespace std;

int main() {
    int basic[3]={1,2,3};
    array<int,4> a={7,2,8,4};

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at 2nd Index->  "<<a.at(2)<<endl;

    cout<<"Empty or not->"<<a.empty()<<endl;

    cout<<"First Element-> "<<a.front()<<endl;
    cout<<"Second Element-> "<<a.back()<<endl;
    return 0;
}