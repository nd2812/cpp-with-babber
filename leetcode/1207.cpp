#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[6]={4,2,2,1,1,3};
    int k=0;
    int a[size(arr)]={0};
    sort(arr,arr+size(arr));
    for(int i=0;i<size(arr)-1;i++){
        if(arr[i]==arr[i+1]){
            a[k]++;
        }
        else{
            k++;
        }
    }
    for(int i=0;i<k-1;i++){
        for(int j=i+1;j<k-1;j++){
            if(a[i]==a[j]){
            cout<<"false"<<endl;
            }
        }
    }
    
    return 0;
}