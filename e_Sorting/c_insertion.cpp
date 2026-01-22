// Insertion Sort
// 14, 9, 15, 12, 6, 8, 13

// In this u have to take small portion of Array, and compare the current index element, that where it should get placed
// and right-shift the remaining element accordingly
// Step 1: index 0:   14 [goes no where]
// Step 2: index 0-1: compare 14 and 9, place 9 at index_0 and right-shift the 14 [9, 14, 15, 12, 6, 8, 13]
// Step 3: index 0-2: compare 9, 14, and 15
// Step 4: index 0-3: compare 9, 14, 15 and 12, place 12 at index_1 and right-shift 14 & 15 [9, 12, 14, 15, 6, 8, 13]
// Step 5: index 0-4: compare and place 6 and place 6 and index_0 and right-shift reamining [6, 9, 12, 14, 15, 8, 13]
// Step 6: index 0-5: compare and place 8 at index_1 and right-shift remaing [6, 8, 9, 12, 14, 15, 13]
// Step 7: index 0-6: compare and place 13 at index_4 and right-shift remaining [6, 8, 9, 12, 13, 14, 15]

// Self-Written: Still not an Insertion Sort, as we have to do Right-Shift

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7] = {14, 9, 15, 12, 6, 8, 13};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<n; i++){
        for(int j = 0; j<= i; j++){
            if(arr[i]< arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7] = {14, 9, 15, 12, 6, 8, 13};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i =0; i<= n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}