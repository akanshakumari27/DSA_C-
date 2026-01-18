// Bubble Sort is Opposite to insertion, it pushes the Max Element in Last by "Adjacent Swapping"
// 13, 46, 24, 52, 20, 9

// step 1: Compare 13 and 46
// step 2: Compare 46 and 24, as 24 is less therefore swap [13, 24, 46, 52, 20, 9]
// step 3: Now Compare 46 and 52
// step 4: Compare 52 and 20, swap [13, 24, 46, 20, 52, 9]
// step 5: Compare 52 and 9, swap [13, 24, 46, 20, 9, 52] 
// Now we recived the Max element at the Last Index! Unlike Insertion, where we get Least element at First index before.
// Therefore now we reduce array from backside
// array: 0 to n-2 check and Repeat the Steps Again!!

// Observe the array is going:
// 0 to n-1
// 0 to n-2
// 0 to n-3
// 0 to n-4
// ..
// 0 to 1 (Therefore create 2 for Loops accordingly)

// Time Complexcity: O(n^2) "Worst and Avg complexcity" and can be Optimised for best
// Time Complexcity: O(n) for best
// A scenario when given Array is already Sorted, So after performing 1 Check Operation, we don't need to perform repeatdly by decreasing array size

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = n-1; i>=0; i--){
        bool didSwap = true;
        for(int j = 0; j<=i-1; j++){  //array starting from 0 to n-1-1(for last element not to exceed else show run time error)
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                //if any swapping didn't happend(means already sorted) then code will come to next line and update bool value
                didSwap = false;
            }
            //this is the case, when array already sorted, best TC: O(n), as it traverse the array only once
            if(didSwap == false){
            break; 
        }
        }
    }

    for(int i = 0; i<n-1; i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}

// For "vector<int> arr = {13, 46, 24, 52, 20, 9};" we can directly use "i < arr.size()"
