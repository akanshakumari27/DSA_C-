// Given an Array, [1, 2, 1, 3, 2] you have to count the number of occurence of each element
// Taking First element and traversing whole array to count occurence, taking second and again traversing whole array
// Traversing whole array: O(n) and 5, 5*O(n) and for series of big Array O(m * n) TLE
// 10^8 operations takes 1sec
// 10^10 operations will take 100secs 

// Hashing : Pre-Storing and Fetching
// It's a technique to store and retrive data in O(1) average time using key-value pair
// C++ provides Hash-Based Containers: "unordered_map()"[commonly used] and "unordered_set()"

// Max array size can be declared arr[10^6], but if try to allocate more, it wil throw "Segmentation Error"
// But if declared Globally, then can go upto arr[10^7]

// Max array Size declared of Int type
// Inside int main(): 10^6
// Global:            10^7

// Max array Size declared of Bool type
// Inside int main(): 10^7
// Global:            10^8

#include<bits/stdc++.h>
using namespace std;
const int n = 1e7;
int arr[n];
//but 1e7 is double literal not an integer(still some comp can support it) therefore better to use const int n = 10000000;

int main(){
    int a;
    cin>> a;
    int arr[a];
    for(int i = 0; i<a; i++){
        cin>>arr[i];
    }

    // PreComputing: Let's assume we have array of num consisting only 12 different nums(0-12) therefore total: 13
    int hash[13] = {0};   //Hash Array: all intiated with 0 [0, 0, .......]
    for(int i =0; i<a; i++){
        hash[arr[i]] += 1;
    }

    // Taking input from users, for which num you want to get frquency
    int q;   
    cin>>q; 
    while(q--){
        int number;
        cin>> number;
        cout<< hash[number] << endl;
    }

    // ******** Hashing for Characters *************
    string s;
    cin>>s;

    // Pre-Compute
    int hash[26] = {0};  //0-25
    for(int i =0; i<s.size(); i++){
        hash[s[i] - 'a'] += 1;
        //'a' ascii value = 97, therfore 97-97 = 0th index
    }

    int q; 
    cin>>q; 
    while(q--){
        char c;
        cin>> c;
        //Fetch
        cout<< hash[c-'a'] << endl;
    }

    //But if not Restricted to Only Lower/Upper Case
    int hash[256] = {0};
    //then don't need to write hash[s[i] - 'a'] and hash[c-'a']
    //Directly write hash[s[i]] and hash[c]
    //because in C/C++ char is stored in 1 byte means 256 possiblities including all chars; for 'a' 97 will also available
    return 0;
}
