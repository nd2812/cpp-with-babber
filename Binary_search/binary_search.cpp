#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid=start +(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            start=0;end=mid-1;
        }
        else{
            end=4;start=mid+1;
        }
        mid=start +(end-start)/2;
    }
    return -1;
}

int main() {
    int arr[5]={1,2,3,4,5};
    int key;
    cin>>key;
    cout<<"Index of "<<key<<" is "<<binarysearch(arr,5,key)<<endl;
    return 0;
}