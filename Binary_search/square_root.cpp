#include<bits/stdc++.h>
using namespace std;

long long int sqrtInt(int n)
{
    // long long int a;
    // a=pow(n,0.5);
    // return a;

    int s=0,e=n;
    long long int mid=s + (e-s)/2;
    int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square >n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s + (e-s)/2;
    }
    return ans;
    return 0;
}

double morePrec(int n,int precision,int tempSol){
    double factor=1;
    double ans= tempSol;

    for(int i=0;i<precision;i++){
        factor = factor/10;

        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
     
}


int main() {
    int n;
    cin>>n;
    int tempSol=sqrtInt(n);
    cout<<" Answer is "<< morePrec(n,3 ,tempSol)<<endl;
    return 0;
}