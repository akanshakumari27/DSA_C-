// Here, u have to search for minimum number in given array, and replace it with corresponding index
// Index: 0, and array 0 to n-1, search least value in given array-range and replace with index 0
// Index: 1, and array 1 to n-1, search least value and replace with index 1
// Index: 2, and array 2 to n-1, search least value and replace with index 2

// Time Complexcity: O(n^2) best, worst, Avg

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i = 0; i<a; i++){
        cin>> arr[i];
    }

    for(int i = 0; i<=a-2; i++){
        int mini = i;
        for(int j = i; j<=a-1; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        // swap(arr[mini], arr[i]);
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }

    for(int i = 0; i<a; i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}