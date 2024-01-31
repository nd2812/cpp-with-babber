#include<bits/stdc++.h>
using namespace std;

int main() {
    int num=5;
    cout<<num<<endl;

    //  address of Operator - &

    cout<<" address of num is -"<<&num<<endl;

    int *ptr = &num;
    cout<<"Address is : "<<ptr<<endl;
    cout<<"Value is : "<<*ptr<<endl;
    cout<<"Size of pointer is :"<<sizeof(ptr)<<endl;
    return 0;
}