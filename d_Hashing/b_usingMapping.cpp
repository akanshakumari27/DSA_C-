// Number Hashing have 2 ways
// STL: Map and unordered_map
// Collection: HashMap  

// [1, 2, 3, 12, 20]
// In Hash we have to create an array of 0-20 indexing; where multiple index remains empty(unncesary use of space)
// In Map u will create array of required "int" only
// By Defaut Map is in Sorted Order

// map<int, int> -> key-value -> num-count

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }

    //Pre-Computing
    map<int, int> mpp;
    for(int i =0; i<n; i++){
        mpp[arr[i]]++;
        //intially the Map is empty, it will look for existing key(arr[i])
        //if not available, it will create new key and intialize it with default value 0 and update it respectively
    }

    //lets check for its sorted order
    for(auto it : mpp){   //auto iterator
        cout<< it.first <<"->" << it.second << endl;
    }

    //Fetching
    int q; 
    cin>> q;
    while(q--){
        int num;
        cin>> num;
        cout<< mpp[num];
    }

    return 0;
}

// Time-Complexcity: Storing and Fetching both have -> "log(n)" in all best, avg, worst case!

// Un-Ordered Map also works the same! unordered_map<int, int> mpp;
// Just therea 2 Diffrence: 
// It will store and print in Unodered Manner
// Time-Complexcity: Storing and Fetching both have -> "O(1)" in best and avg cases!
// Worst case: O(n)
// n: number of elements in Map

// So, First priority to unordered_map O(1) (as worst case rarely happens due to internal collision, that's O(n))
// But, if it happen then switch to Map log(n)

// As we know, after exceeding array size 10^7, hashing cannot be done, then how Map Data-Structure created
// There 3 Methods come for Hashing: 
// Division Method
// Folding Method
// Mid-Square Method

// All are advance methods, we will just look the Theory part of "Divison Method"
// This method helps to map any large key to small index in Hash Table
// Here just neede one Operation %: hash(key) = key % table_size
// Lets say array size 10 [2, 5, 16, 28, 139, 38, 48, 28, 18], therfore we will compute {arr[i] % 10}
// It will compute last digit of INT and store accordingly
// 0
// 1
// 2 -> 2
// 3
// 4
// 5 -> 5
// 6 -> 16
// 7
// 8 -> 18, 28, 28, 38, 48 (Here we can easily fetch the required key, from the formed sorted array)
// 9 -> 139