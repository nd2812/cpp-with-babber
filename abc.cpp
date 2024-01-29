#include<bits/stdc++.h>
using namespace std;

int solve(string s[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=="+"){
            sum++;
        }
        else{
            sum--;
        }
    }
    if(sum<0){
        sum=-sum;
    }
    return sum;
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s1;
        cin>>s1;
        string s[n];
        for(int i=0;i<n;i++){
            s[i]=s1[i];
        }
        cout<<solve(s,n)<<endl;
    }
    return 0;
}