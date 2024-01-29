#include<bits/stdc++.h>
using namespace std;

int getpivot(vector<int>& arr,int n){
    int s=0;
    int e=n-1;
    int mid = s+ (e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+ (e-s)/2;
    }
    return s;
}


int binarysearch(vector<int>& arr,int start,int end,int key){
    int mid=start +(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start +(end-start)/2;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    
    if(k>=arr[getpivot(arr,n)]&&k<=arr[n-1]){
        
        return binarysearch(arr,getpivot(arr,n)-1,n-1,k);
    }
    else{
        return binarysearch(arr,0,getpivot(arr,n),k);
    }
}


int main() {
    vector <int> arr={12,15,18,2,4};
    cout<<search(arr,5,18)<<endl;
    return 0;
}