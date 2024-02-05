#include<bits/stdc++.h>
using namespace std;

int main() {
    // int arr[10]={2,5,8};

    // cout<<" address of first memory block is "<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<" address of first memory block is "<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<1[arr]<<endl;
    // formula --> arr[i]=*(arr+i)

    // int temp[10]={1,2};
    // cout<<sizeof(temp)<<endl;
    // cout<<sizeof(*temp)<<endl;
    // cout<<sizeof(&temp)<<endl;
    // int *ptr=&temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    // int a[20]={1,2,3,5};
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    // int *p = &a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<< &p<<endl;

    // int arr[10];

    // ERROR
    // arr=arr+1;

    // int *ptr=&arr[0];
    // cout<<ptr<<endl;
    // ptr++;
    // cout<<ptr<<endl;

    int arr[6]={11,21,31};
    int *p = arr;
    //int *ptr = arr++;//gives an error
    cout<<p[2]<<endl;//output is arr[2]

    return 0;
}