#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[3]={1,2,3};
    int n=pow(2,3);
    for(int i=1;i<=n;i++){
        int k=i;
        vector<int> ans;
        for(int j=0;j<3;j++){
            if(k&1){
                ans.push_back(arr[j]);
            }
            k=k>>1;
        }
        for(int j=0;j<ans.size();j++){
            cout<<ans[j]<<" ";
        }cout<<endl;

    }
    return 0;
}