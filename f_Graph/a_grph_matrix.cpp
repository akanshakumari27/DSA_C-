// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector<vector<int>> matrix(3, vector<int>(4, 1));
    
//     for(int i = 0; i<3; i++){
//         for(int j =0; j<4; j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;   // new line after each row
//     }
    
//     return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //undirectional unweighted graph by Adjaceny matrix
    int vertics, edges;
    cin>>vertics>>edges;
    vector<vector<bool>> matrix(vertics, vector<bool>(vertics, 0));
    
    int u, v;
    for(int i =0; i<edges; i++){
        cin>>u>>v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }
    
    for(int i =0; i<vertics; i++){
        for(int j =0; j<vertics; j++){
            cout<<matrix[i][j] <<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
