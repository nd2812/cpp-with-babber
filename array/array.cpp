#include<bits/stdc++.h>
using namespace std;

int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

int main() {
    int number[15];

    // cout<<"Value at 15 index:"<<number[14]<<endl;

    // cout<<"Value at 20 index:"<<number[20]<<endl;

    // initialising an array
    // int second[3]={5,7,11};

    // cout<<"Value at 2 index:"<<second[2]<<endl;
    // initialising all locations with 0
    int fourth[10]={1};
    int fourthsize = sizeof(fourth)/sizeof(int);
 
    // for(int i=0;i<10;i++){
    //     cout<<fourth[i]<<" ";
    // }
    // printarray(fourth,fourthsize);
    char ch[5]={'a','b','c','d','e'};
    // cout<<ch[3]<<endl;

    for(int i=0;i<sizeof(ch);i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;


    cout<<endl<<"Everything is Fine "<<endl<<endl;
    return 0;
}