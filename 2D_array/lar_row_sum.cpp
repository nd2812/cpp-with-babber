#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    int maxsum=INT_MIN;
    int index=0;
    for(int i=0;i<3;i++){
        int sum=0;
        
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            index=i;
        }
    }
    cout<<"largest Row-sum:"<<maxsum<<" Row:"<<index<<endl;
    return 0;
}