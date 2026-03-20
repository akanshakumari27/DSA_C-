// why Merge Sort?
// All Sorting we learn above Takes O(n^2) Time-Complexcity, whereas Merge Sort takes O(n*log(n))
// Space Complexcity: O(n) (as it use extra Temporary array)

// Merge Sort -> "Devide and Merge"
// Notice: example Array size: 9, if devided it in 5 and 4 (make sure further division should also Larger then Smaller)
// Array size: 9: if devided 4 and 5 (furher dision should also Smaller then Larger)

     /*            [3, 1, 2, 4, 1, 5, 2, 6, 4] 
                    |                   |            
            [3, 1, 2, 4, 1]          [5, 2, 6, 4]
                |        |              |     |
            [3, 1, 2]   [4, 1]        [5, 2] [6, 4]
              |    |     |  |
            [3, 1] [2]  [4] [1]
             |   |
            [3] [1]                                   */

// Array is Devided into their smaller elements, now will merge it and keep moving upward to get whole Sorted array!

/*       [1, 1, 2, 2, 3, 4, 4, 5, 6]
            |                    |
  [1, 1, 2, 3, 4]              [2, 4, 5, 6]
       |      |                     |
 [1, 2, 3]  [1, 4]             [2, 4, 5, 6]
     |                           |       |
  [1, 3]                       [2, 5]  [4, 6]    */


void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    // [low to mid]
    // [mid+1 to high]
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low=; i<=high; i++){
        arr[i] = temp[i -low];
    }
    
}

void mS(vector<int> &arr, int low, int high){
    if(low == high) return;
    int mid = (low + high) /2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high)
}
void mergeSort(vector<int> &arr, int n){
    mS(arr, 0, n-1);
}


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr[] = {3, 1, 2, 4, 1, 5, 2, 6, 4};

    return 0;
}