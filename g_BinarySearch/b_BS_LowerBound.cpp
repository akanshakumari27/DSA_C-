// Linear Search
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
    for(int i =0; i<a; i++){
        if(v[i] >= k){
            cout<< i;
            return 0;
        }
    }
    cout<< a;
    return 0;
}
// -------------------------------------------------------------------------------------------------------

//using Binary Search

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    vector<int> v(a);
    for(int i = 0; i < a; i++){
        cin >> v[i];
    }

    int k;
    cin >> k;
    int start = 0, end = a - 1;
    int ans = a;  // default = insert at end
    while(start <= end){
        int mid = (start + end) / 2;

        if(v[mid] >= k){
            ans = mid;       // store answer
            end = mid - 1;   // move left
        } else {
            start = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
// When condition satisfied:
// Don’t stop
// Move left to find first occurrence
// v = [1, 2, 4, 4, 4, 6]; k = 4

/* 👉 First index where v[i] ≥ k
auto it = lower_bound(v.begin(), v.end(), k);
   👉 Index:
int index = it - v.begin(); */

// "auto it" gives iterator, not index; so we subtracted it with v.begin() iterator; to get distance between these two(equals to index)