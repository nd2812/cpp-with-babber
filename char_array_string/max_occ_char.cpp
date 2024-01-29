#include<bits/stdc++.h>
using namespace std;

char getmaxocc(string str){
    int arr[26]={0};
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        // lower case
        if(ch>='a' && ch<='z'){
            int n=ch-'a';
            arr[n]++;
        }
        // upper-case
        else{
            int n=ch-'A';
            arr[n]++;
        }
    }
    int maxi=-1,index=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
            index=i;
        }
    }
    return 'a'+index;
}

int main() {
    string s;
    cin>>s;
    cout<<getmaxocc(s)<<endl;
    return 0;
}