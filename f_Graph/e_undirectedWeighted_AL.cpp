#include<bits/stdc++.h>
using namespace std;
int main(){
    int vertex, edges;
    cin>>vertex>>edges;

    vector<vector<pair<int, int>>> adjacencyList(edges);
    int v, u, weight;
    for(int i =0; i<edges; i++){
        cin>>v>>u>>weight;
        adjacencyList[v].push_back(make_pair(u, weight));
        adjacencyList[u].push_back(make_pair(v, weight));
    }

    //print the List
    for(int i =0; i<vertex; i++){
        cout<<i<<" -> ";
        for(int j =0; j<adjacencyList[i].size(); j++){
            cout<<"{"<<adjacencyList[i][j].first<<","<<adjacencyList[i][j].second<<"}";
        }
        cout<<endl;
    }

    return 0;
}

// I/P
// 5 6
// 0 1 5
// 0 2 6
// 1 3 7
// 1 2 5
// 3 4 6
// 2 4 7

// O/P
// 0 -> {1,5}{2,6} 
// 1 -> {0,5}{3,7}{2,5}
// 2 -> {0,6}{1,5}{4,7}
// 3 -> {1,7}{4,6}
// 4 -> {3,6}{2,7}