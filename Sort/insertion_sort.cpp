#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=1;i<n;i++){
    //     for(int j=i;j>=1;j--){
    //         if(arr[j]<arr[j-1]){
    //             swap(arr[j],arr[j-1]);
    //         }
    //     }
    // }
    for(int i=1;i<n;i++){
        int j=i-1,temp=arr[i];
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}