//#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int,string> m;
    m[1]="babbar";//here 1 is key and babber is value
    m[2]="love";
    m[13]="kumar";

    m.insert({5,"bheem"});

    cout<<"before earse:"<<endl;
    for(auto i:m){

        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13 -> "<<m.count(13)<<endl;
    // m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;

    }
    auto it = m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}