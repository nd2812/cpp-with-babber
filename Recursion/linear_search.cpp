#include<bits/stdc++.h>
using namespace std;

bool linsearch(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        return linsearch(arr+1,size-1,key);
    }
    
}

int main() {
    int arr[5]={3,5,1,2,6};
    int key =2;
    int size=5;

    bool ans = linsearch(arr,size,key);

    if(ans){
        cout<<"key is found"<<endl;
    }
    else{
        cout<<"key is not found"<<endl;
    }
    return 0;
}