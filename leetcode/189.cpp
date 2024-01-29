#include<bits/stdc++.h>
using namespace std;

void Rotate(vector<int>& nums, int k) {
        int x=nums.size();
        vector<int> num;
        num=nums;
        
        for(int i=x-1;i>=0;i--){
            nums[(i+k)%x]=num[i];
        }
        
    }

int main() {
    vector<int> nums={1,2,3,4,5,6,7};
    Rotate(nums,3);
    for(int i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}