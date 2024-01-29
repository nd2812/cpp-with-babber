// row-wise triangle abcd pattern 
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<char(65+i)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// triangle pattern

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
// //     int c=0;
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<=i;j++){
// //             cout<<char(65+c)<<" ";
// //             c++;
// //         }
// //         cout<<endl;

// //     }
// //     return 0;
// // }

// // triangle pattern 
// // #include<bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin>>n;
    
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<=i;j++){
// //             cout<<char(65+j+i)<<" ";
// //         }
// //         cout<<endl;

// //     }
// //     return 0;
// // }

// // triangle 

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<char(65+n-i+j-1)<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }
// triangle 

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i+j>2){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// uper-triangle

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i+j<4){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// triangle

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i<=j){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// traingle of number

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i<=j){
//                 cout<<i+1<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// triangle of number
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i+j>2){
//                 cout<<i+1<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// triangle
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int c=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i+j>2){
//                 cout<<c<<" ";
//                 c++;
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// real triangle
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<2*n-1;j++){
//             if(i+j>n-2 && j<n){
//                 cout<<j-(n-2)+i<<" ";
               
//             }
//             else if(i+n-1>=j && j>n-1){
//                 cout<<-j+n+i<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// tagda pattern

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            if(i+j<n &&j<n){
                cout<<j+1<<" ";
               
            }
            else if(i+n<=j&&j>=n){
                cout<<n*2-j<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}