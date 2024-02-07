#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int size){
    if(size==0){
        return 0;
    }
    return arr[0]+sum(arr+1,size-1);
}

int main() {
    int arr[5]={3,2,5,1,6};
    int size=5;
    cout<<sum(arr,size)<<endl;
    return 0;
}