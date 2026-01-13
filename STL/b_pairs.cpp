// pairs: Utility Library
// It does not belong to "Container" because, it stores exactly 2 values, NO iterators, size, traversel

// <utility> is part of the C++ Standard Library and mainly provides:
// pair
// make_pair
// swap
// move
// forward
// These are general-purpose utilities used across programs

#include<iostream>
using namespace std;
void explainPair(){
    pair<int, int> p = {1, 3};
    cout<< p.first << " " << p.second;

    pair<int, pair<int, int>>p1 = {2, {3,4}};
    cout<< p1.first<< p1.second.second;

    pair<int, int> arr[] = {{2,4}, {7,1}, {4,9}};
    cout<< arr[1].second;  //1
}

int main(){

    return 0;
}