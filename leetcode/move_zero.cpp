#include<bits/stdc++.h>
using namespace std;

void movezero(int arr[],int n){
    int i=0;
    
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;  
        }
    }
}

int main() {
    int arr[6]={1,0,3,0,12,0};
    movezero(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}