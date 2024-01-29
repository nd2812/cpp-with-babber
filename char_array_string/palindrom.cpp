#include <bits/stdc++.h> 
using namespace std;

bool checkPalindrome(string s)
{
    int len=s.length();
    string s2;
    int j=0;
    for(int i=0;i<len;i++){
        if(s[i]>64 && s[i]<91){
            s2.push_back(s[i]+'a'-'A');
            j++;
        }
        else if(s[i]>96 && s[i]<123){
            s2.push_back(s[i]);
            j++;
        }
        else if(s[i]>47 && s[i]<58){
            s2.push_back(s[i]);
            j++;
        }
    }
    cout<<s2<<endl;

    for(int i=0;i<(j+1)/2;i++){
        if(s2[i]!=s2[j-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        getline(cin,s);
        cout<<checkPalindrome(s)<<endl;;
    }

    return 0;
}