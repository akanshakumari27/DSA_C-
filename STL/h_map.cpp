// Map is data structure, which is used to store in Key-Value Pair
// Key-Value can be of any Data-Type (char, float, double, pair etc)
// Map stores "unique" Keys in "Sorted" Order, similar to Set Data Structure

#include<bits/stdc++.h>
using namespace std;

void myMap(){
    //all are Key-Value Pairs
    map<int, int> mp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mppp; 

    //three ways of inserting elements
    mp[1] = 3;          //key:1 value:3
    mp.insert({2, 3});  //key:2 value:3
    mp.emplace(3, 3);   //key:3 value:3

    mppp[{2, 3}] = 8;    //pair-key and value

    //Traversing through Map
    // for (auto it = mp.begin(); it != mp.end(); ++it) both ways are same
    for(auto it: mp){
        cout<< it.first << " " << it.second;  
        //prints keys and values
    }

    cout<< mp[1];  //prints value: 3
    cout<< mp[4];  //as key 4 doesn't exists, therefore prints value: 0

    // {3, 1}
    auto val = mp.find(3);
    cout << (*val).second;  //will print 1

    mp.find(5);  //but key-5 is not available; therfore points mp.end() means points after the last element
    //it points to the address of the pair, not just the value.

    auto it = mp.lower_bound(2);
    auto it = mp.upper_bound(3);

    //erase, swap, size, empty all are same as above
}

void muMultiMap(){
    //everything is same as Map, only difference you can now store "Multiple Keys"
}

void unorderedMap(){
    //same difference as set and unordered_set
}

// Most map works O(log) time
// Most unordered_map works O(1) time, rare and worst case it goes upto O(n)

int main(){
    return 0;
}

// Till here, we are done with "Iterators and Containers"
// From next we will look upon on "Algorithms"
// No need to learn about "Functions" rn (we will learn it by Code)