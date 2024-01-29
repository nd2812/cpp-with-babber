// #include<bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> v;

    vector<int> a(5,1);//initializing vecotr with fix size and fill all with 1 element
    vector<int> last(a);//copy vector a to new vector last
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Capacity-> "<<v.capacity()<<endl;
    
    v.push_back(5);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    
    v.push_back(4);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;
    
    cout<<"Element at 2nd Index-> "<<v.at(2)<<endl;
    cout<<"Front-> "<<v.front()<<endl;
    cout<<"End-> "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before clear size-> "<<v.size()<<endl;
    cout<<"before clear capacity-> "<<v.capacity()<<endl;

    v.clear();
    cout<<"before clear size-> "<<v.size()<<endl;
    cout<<"before clear capacity-> "<<v.capacity()<<endl;

    return 0;
}