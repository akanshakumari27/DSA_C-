#include<bits/stdc++.h>
using namespace std;
int main(){
    int vertex, edges;
    cin>>vertex>>edges;

    vector<vector<int>> adjacencyList(edges);
    int v, u;
    for(int i =0; i<edges; i++){
        cin>>v>>u;
        adjacencyList[v].push_back(u);
        adjacencyList[u].push_back(v);
    }

    //print the List
    for(int i =0; i<vertex; i++){
        cout<<i<<" -> ";
        for(int j =0; j<adjacencyList[i].size(); j++){
            cout<<adjacencyList[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// vector -> vectors
//     0 -> 1, 2
//     1 -> 0, 3, 2
//     2 -> 0, 4, 1
//     3 -> 1, 4
//     4 -> 2, 3

// [[1,2], [0, 3, 2], [0, 4, 1], [1, 4], [2, 3]]
//   0          1         2         3       4