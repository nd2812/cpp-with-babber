// GFG question
// Sum of minimum and maximum elements of all subarrays of size k.
#include<bits/stdc++.h>
using namespace std;

int solve(int *arr,int n,int k){
    deque<int> maxi(k);
    deque<int> mini(k);

    // additionnof first k size of window

    for(int i=0;i<k;i++){
        while(!maxi.empty() && arr[maxi.back()]<=arr[i])
            maxi.pop_back();

        while(!mini.empty() && arr[mini.back()]>=arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans=0;
    ans+=arr[maxi.front()]+arr[mini.front()];
    
    // remaining windows ko process kardo 
    for(int i=k;i<n;i++){

        // next window

        // removel
        while(!maxi.empty()&&i-maxi.front()>=k){
            maxi.pop_front();
        }
        while(!mini.empty()&&i-mini.front()>=k){
            mini.pop_front();
        }

        // additionn 

        while(!maxi.empty() && arr[maxi.back()]<=arr[i])
            maxi.pop_back();

        while(!mini.empty() && arr[mini.back()]>=arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
        ans+=arr[maxi.front()]+arr[mini.front()];
    }

    return ans;
}

int main() {
    int arr[7]={2,5,-1,7,-3,-1,-2};
    int k=4;
    cout<<solve(arr,7,k)<<endl;
    return 0;
}