// Linear Search: when you search in linear way, starting from index 0 to end
// But this in worst case, it's Time-Complexcity: "O(n)" as if we had to search for element present in last index.
// O(n)

// In binary search, we repeatedly divide the search space into half by comparing the target with the middle element. 
// Based on the comparison, we eliminate one half and continue searching in the other half. It works only on sorted arrays and has a time complexity of 
// O(log n)

// Notice which and why these steps are taken first!

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    vector<int> v(a);
    for(int i =0; i<a; i++){
        cin>>v[i];
    }
    int k;
    cin>> k;
    int start = 0;
    int end = a - 1;
    bool check = false;
    while(start <= end){
        int mid = (start + end)/2;
        if(v[mid] == k){
            cout<< mid;
            check = true;
            break;
        }
        else if(v[mid] < k){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    if(!check){
        cout<<"No such element present";
    }
    return 0;
}