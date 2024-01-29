#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortone(int arr[],int n){
    int left=0,right=n-1;
    while(left<=right){
        if(arr[left]==0){
            left++;
        }
        else if(arr[right]==1){
            right--;
        }
        else{
            swap(arr[left],arr[right]);
        }
    }
}

int main() {
    int arr[8]={1,1,0,0,0,0,1,0};
    sortone(arr,8);
    printarray(arr,8);
    return 0;
}