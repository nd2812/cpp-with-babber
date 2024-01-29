#include<bits/stdc++.h>
using namespace std;

int peak(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
            return mid;
        }
        else if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if (arr[mid]>arr[mid+1]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main() {
    int arr[6]={3,4,5,8,4,1};
    cout<<peak(arr,6)<<endl;
    return 0;
}