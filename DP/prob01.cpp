// min. cost Climbing Stairs
// You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.
// You can either start from the step with index 0, or the step with index 1.
// Return the minimum cost to reach the top of the floor.
#include<bits/stdc++.h>
using namespace std;
// only recursion 
// T.C-O(N)
// S.C-O(N)+O(N)
int solve(vector<int> &cost,int n){
    // base case
    if(n==0 || n==1){
        return cost[n];
    }

    return cost[n]+min(solve(cost,n-1),solve(cost,n-2));
}

// recursion+mamorization
// T.C-O(N)
// S.C-O(N)+O(N)
int solve2(vector<int> &cost,int n,vector<int> &dp){
    // base case
    if(n==0 || n==1){
        return cost[n];
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=cost[n]+min(solve2(cost,n-1,dp),solve2(cost,n-2,dp));
    return dp[n];
}


// tabulation
// T.C-O(N)
// S.C-O(N)
int solve3(vector<int> &cost,int n){
    // step-1:creation of dp array
    vector<int> dp(n+1);
    // step-2:base case analiysis
    dp[0]=cost[0];
    dp[1]=cost[1];

    // step-3:
    for(int i=2;i<n;i++){
        dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
    }
    return min(dp[n-1],dp[n-2]);
}

// space optimize
// T.C-O(N)
// S.C-O(1)
int solve4(vector<int> &cost,int n){

    int prev2=cost[0];
    int prev1=cost[1];

    // step-3:
    for(int i=2;i<n;i++){
        int curr=cost[i]+min(prev1,prev2);
        prev2=prev1;
        prev1=curr;
    }
    return min(prev1,prev2);
}

int minCostClimbingStairs(vector<int>& cost) {
    // int n=cost.size();
    // // it can be simplified
    // int ans=min(solve(cost,n-1),solve(cost,n-2));
    // return ans;


    // int n=cost.size();
    // vector<int> dp(n+1,-1);
    // int ans=min(solve2(cost,n-1,dp),solve2(cost,n-2,dp));
    // return ans;

    // int n=cost.size();
    // return solve3(cost,n);

    int n=cost.size();
    return solve4(cost,n);
}

int main() {
    vector<int> cost;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        cost.push_back(a);
    }
    cout<<minCostClimbingStairs(cost)<<endl;

    return 0;
}
/*
Input: cost = [10,15,20]
Output: 15
*/