// calculator
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    char ch ;
    cin>>ch;

    switch(ch){
        case '*':cout<<a*b<<endl;
                break;
        case '-':cout<<a-b<<endl;
                break;
        case '/':cout<<a/b<<endl;
                break;
        case '+':cout<<a+b<<endl;
                break;
        case '%':cout<<a%b<<endl;
                break;
        default:cout<<"Enter valid inputs."<<endl;
        
    }
    return 0;
}