// reverse array

int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = size -1;
    while(i <= j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}

// using another array; u can also do using another vector
int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int jrr[size];
    int m = 0;
    for(int i =size-1; i>=0; i--){
        jrr[m] = arr[i]; 
        m++;
    }
    for(int i =0; i<size; i++){
        cout<<jrr[i]<<" ";
    }
	return 0;
}  
//v.push_back(v1[i])
// sort(v.begin(), v.end());
------------------------------------------------------------------------------------------------------------------------

// Count frequency of each element

int main() {
    int arr[] = {10,5,10,15,10,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int, int> mpp;
    for(int i =0; i<size; i++){
        mpp[arr[i]]++;
    }
    for(auto i =mpp.begin(); i != mpp.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
	return 0;
}

// 15 1
// 5 2
// 10 3
--------------------------------------------------------------------------------------------------------------------------

// Get Total Unique Element

int main() {
    int arr[] = {10,5,10,15,10,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    set<int> s;
    for(int i =0; i<size; i++){
        s.insert(arr[i]);
    }
    cout<<s.size();
	return 0;
}
---------------------------------------------------------------------------------------------------------------------------

// Example 1:
// Input:  arr1[]= [1,3,4,5,2]
//         arr2[]= [2,4,3,1,7,5,15]
// Output: arr1[] is a subset of arr2[]

int main() {
    int arr1[] = {1,3,4,5,2};
    int arr2[] = {2,4,3,1,7,5,15};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    unordered_set<int> s;

    // insert arr2 elements
    for(int i = 0; i < m; i++){
        s.insert(arr2[i]);
    }

    bool isSubset = true;

    // check arr1 elements
    for(int i = 0; i < n; i++){
        if(s.find(arr1[i]) == s.end()){ 
            isSubset = false;
            break;
        }
    }

    if(isSubset)
        cout << "arr1 is a subset of arr2";
    else
        cout << "arr1 is not a subset of arr2";

    return 0;
}

// What does s.find(x) return?
// If x exists in the set → returns an iterator to that element
// If x does NOT exist → returns s.end()

// What is s.end()?
// s.end() is an iterator that points just after the last element
---------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return;
        vector<int> temp;
        for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                temp.push_back(nums[i]);     
            }
        }
        for(int i = 0; i<n; i++){
            nums[i] = temp[i];   //it overwrite the existing elements
        }
    }
};

// instead of pushing 0 in Temp, u can create for loop starting from temp.size(), till n and do: arr[i] == 0

// SC: O(n) worst case, as we using an extra array space of size n, so it possible whole array be non-zero number

----------------------------------------------------------------------------------------------------------------------

// Two Pointers (Optimised)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return;
        int j = -1;
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
        if(j == -1) return;
        for(int i = j+1; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
-----------------------------------------------------------------------------------------------------------------

// Reverse String

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int i = 0;
    int j = s.length() - 1;
    while( i<= j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout<<s;
}
--------------------------------------------------------------------------------------------------------------------

// String Anagram

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    map<char, int> mpp1;
    map<char, int> mpp2;

    for(int i = 0; i < s1.size(); i++){
        mpp1[s1[i]]++;
    }

    for(int i = 0; i < s2.size(); i++){
        mpp2[s2[i]]++;
    }

    if(mpp1 == mpp2){
        cout << "Yes";
    } else {
        cout << "NO";
    }

    return 0;
}
----------------------------------------------------------------------------------------------------------------------

// Factorial using Recursion

int factorial(int n) {
    if (n == 0 || n == 1)  // base case
        return 1;
    return n * factorial(n - 1);  // recursive case
}
int main() {
    int n = 8;
    cout << factorial(n);  // prints 8! = 40320
    return 0;
}
-----------------------------------------------------------------------------------------------------------------------

// Fabonacci using Recursion

int fab(int n){
    if(n <= 1)       // base cases
        return n;
    return fab(n-1) + fab(n-2);  // recursive step
}

int main() {
    int n = 6;  // number of terms in the series

    cout << "Fibonacci series: ";
    for(int i = 0; i < n; i++){
        cout << fab(i) << " ";
    }
    return 0;
}
// Fibonacci series: 0 1 1 2 3 5
------------------------------------------------------------------------------------------------------------------------

// Recursive function to calculate nCr
int nCr(int n, int r) {
    if (r == 0 || r == n)  // base case
        return 1;
    return nCr(n-1, r-1) + nCr(n-1, r);  // recursive step
}

int main() {
    int n = 5, r = 2;
    cout << "C(" << n << "," << r << ") = " << nCr(n, r) << endl;
    return 0;
}

= n(factorial)/r(factorial) * n-r(factorial)

nCr=(n−1)C(r−1)+(n−1)C(r)
-----------------------------------------------------------------------------------------------------------------------