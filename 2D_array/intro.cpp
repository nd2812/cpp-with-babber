#include<bits/stdc++.h>
using namespace std;

bool ispresent(int arr[][3],int target,int row,int col){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main() {
    // creating 2d array
    // int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // int arr[3][3]={{1,11,111},{2,22,222},{3,33,333}};
    int arr[3][3];

    // taking input
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    // print
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<" Enter the element to search "<<endl;
    int target;
    cin>>target;

    if(ispresent(arr,target,3,3)){
        cout<<" Element found "<<endl;
    }
    else{
        cout<<" Not found"<<endl;
    }

    return 0;
}

// if we pass 2D array in function by vector then find row and column by following way--
// int row= matrix.size();
// int col= matrix[0].size();