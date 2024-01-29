#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part) {
    // here find function is used to find first occurance of part in s;
    while(s.length()!=0 && s.find(part)<s.length()){
    s.erase(s.find(part),part.length());
    }  
    return s; 
}

int main() {
    string s,part;
    cin>>s>>part;
    cout<<removeOccurrences(s,part)<<endl;
    return 0;
}