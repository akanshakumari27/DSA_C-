// Lower Bound:  v[i] >= k
// Upper Bound:  v[i] > k

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
    int end = v.size() - 1;
    int ans = a; 
    // if none of element >k present therefor k will push_back to last indices, increasing size!
    // Thats why {ans = a-1} wrong, as in a-1th postion, already present an element <k
    while(start <= end){
        int mid = (start + end)/2;
        if(v[mid] > k){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    cout<< ans;
    return 0;
}


/* 👉 First index where v[i] > k
auto it = upper_bound(v.begin(), v.end(), k);
👉 Index:
int index = it - v.begin(); */


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 3, 6, 8, 10, 10, 16, 20};
    int k = 10;
    
    auto it = lower_bound(v.begin(), v.end(), k);
    int index = it - v.begin();
    
    auto it2 = upper_bound(v.begin(), v.end(), k);
    int index2 = it2 - v.begin();
    
    cout<< index<<" "<<index2;
    
    return 0;
}

// Output: 4 6