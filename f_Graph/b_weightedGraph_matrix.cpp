#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // Undirectional Weighted Graph

    int vertics, edges, weight;
    cin>> vertics >> edges;
    
    vector<vector<int>> matrix(vertics, vector<int>(vertics, 0));
    
    int v, u;
    for(int i = 0; i<edges; i++){
        cin>>v>>u>>weight;
        matrix[v][u] = weight;
        matrix[u][v] = weight;
    }
    
    for(int i = 0; i<vertics; i++){
        for(int j = 0; j<vertics; j++){
            cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
    }
    
    return 0;
}