// row-wise ABCD
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<char(65+i)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// coloumn-wise ABCD
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<char(65+j)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// rectangle abcd

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<char(65+(n*i)+j)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// rectangle
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<char(65+i+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}