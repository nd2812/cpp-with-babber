#include<bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carray=0;

    while(i>=0 && j>=0){
        int val1=a[i];
        int val2=b[i];

        int sum = val1+val2+carray;

        carray = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;

    }

    //  first case

    while(i>=0){
        int sum=a[i]+carray;
        carray = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    // second case
    while(j>=0){
        int sum=b[j]+carray;
        carray = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    // third case
    while(carray!=0){
        int sum=carray;
        carray = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    return ans;

}

int main() {
    
    return 0;
}