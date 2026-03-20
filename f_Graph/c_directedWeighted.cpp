// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     // Directed Weighted Graph
//     int vertics, edges, weight;
//     cin>> vertics >> edges;
    
//     vector<vector<int>> matrix(vertics, vector<int>(vertics, 0));
    
//     int v, u;
//     for(int i = 0; i<edges; i++){
//         cin>>v>>u>>weight;
//         matrix[v][u] = weight;  //as only 1 direction it's moving!
//     }
    
//     for(int i = 0; i<vertics; i++){
//         for(int j = 0; j<vertics; j++){
//             cout<<matrix[i][j]<<" ";
//             }
//             cout<<endl;
//     }
    
//     return 0;
// }

// // Time Complexcity: O(v^2)
// // Space Complexcity: O(v^2)


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t <= 0) return -1;
    int a, b, c;
    
    while(t--){
        cin>>a>>b>>c;
        if(a == b || b == c || c == a){
            int Max = max(a, max(b, c));
            int Min = min(a, min(b, c));
            if((Max - Min) % 2 == 0){
                cout<<(Max-Min)/2;
            }else{
                cout<< -1;
            }
        }else{
            cout<< -1;
        }
    }
    return 0;
}

// To store -10 in binary, we take two's compliment of binary digit of 10
// -- first 1's compliment (which reverse digits)
// -- add 1 now
// MSB is also included, regardless all bits

// To binary to decimal for negative integers
// Again 2's compliment

// Left shift Operator << of a by b times
// It becomes (a * 2^b)
// Right shift Operator >> of a by b times
// becomes (a / 2^b)