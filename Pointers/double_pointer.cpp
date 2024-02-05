#include<bits/stdc++.h>
using namespace std;

void update(int **p){
    // p=p+1;
    // kuch change hoga -- NO
    
    // *p=*p+1;
    // kuch change hoga -- YES
    
    // **p=**p+1;
    // kuch change hoga --YES

}

int main() {
    int i=5;
    int * p=&i;
    int ** p2=&p;

    // cout<<"Sab sahi chal raha hai "<<endl<<endl;

    // cout<<"Value of i"<<endl;


    // cout<<"Printing address of i "<<endl;
    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl<<endl;

    // cout<<"Address of p"<<endl;
    // cout<<&p<<endl;
    // cout<<p2<<endl<<endl;


    cout<<"Before "<<i<<endl;
    cout<<"Before "<<p<<endl;
    cout<<"Before "<<p2<<endl<<endl;

    update(p2);
    cout<<"After "<<i<<endl;
    cout<<"After "<<p<<endl;
    cout<<"After "<<p2<<endl<<endl;


    


    return 0;
}       