// FIFO (First In First Out)

#include<bits/stdc++.h>
using namespace std;
void myQueue(){
    queue<int> q;
    q.push(10);    // {10}
    q.push(20);    // {10, 20}
    q.emplace(40); // {10, 20, 40}

    q.back() += 5; // this will make 40 -> 45
    
    cout<< q.back();  // 45
    cout<< q.front(); // 10
    q.pop();          // {20, 40} deletes the front element 
    cout<< q.front(); // 20
}

void priorityQueue(){
    // here Max element stays in TOP (Default priority_queue<int> is a Max Heap)
    // Two types of Priority Queue: Min and Max
    // Elements are inserted from the back, and then Rearranged

    priority_queue<int> pq;
    pq.push(5);   // {5}
    pq.push(2);   // {5, 2}
    pq.push(8);   // {8, 5, 2}
    pq.emplace(10);  // {10, 8, 5, 2}

    cout << pq.top();  // 10
    pq.pop();          // It will pop 10
    //size, swap, empty frunctions are same as Others

    // Min Heap
    // priority_queue<T, Container, Compare>
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(5);
    mpq.push(2);
    mpq.push(8);
    mpq.emplace(10);

    cout<< mpq.top();  //2
}

// Time Complexcities
// push and pop -> O(log n)
// top -> O(1)

int main(){
    return 0;
}