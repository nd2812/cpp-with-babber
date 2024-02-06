#include<bits/stdc++.h>
using namespace std;

int main() {
    int row;
    cin>>row;

    int col;
    cin>>col;
    int **a=new int*[row];
    for(int i=0;i<row;i++){
        a[i]=new int [col];
    }

    // creation done

    // taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    // releasing a memory
    for(int i=0;i<row;i++){
        delete [] a;
    }
    delete [] a;

    // how to create a 2D array dynamically
    // input/output
    // memory free kaise karani hai
    
    return 0;
}