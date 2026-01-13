// Set is an Associative and Tree Container, which stores "Sorted and Unique" elements
// here everything happens in Logrithmic Time Complexcity O(logn); inserting, erasing etc
// For a set (implemented as a balanced BST / Red-Black Tree):
// insert(), erase(), find(), lower_bound(), upper_bound(), count() -> O(logn)
// why O(logn)? log n ~ height of balanced BST (all operation traverse tree height)

#include<bits/stdc++.h>
using namespace std;

void mySet(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.emplace(30);  //{10, 20, 30}
    //begin, end, rbegin, rend, size, empty and swap are same

    auto it = s.find(20);  // "iterator", will return address of 20
    auto it = s.find(50);  // as element is not present here;
    //so, it will return 's.end()' means address of just right after the last element

    s.erase(30);
    // s.erase(element);
    // s.erase(address);

    int countOccur = s.count(10);  //as set stores unique element, so it will return 1 or 0
    s.erase(countOccur);

    // {1, 2, 3, 4, 5, 6}
    auto it1 = s.find(2);
    auto it2 = s.find(4);

    s.erase(it1, it2);  //[first, last) therfore {1, 4, 5, 6}, erases 2 and 3

    // lower_bound ad upper_bound works same as in Vector
    // *********** watch vector video first *****************
}

void myMultiSet(){
    // Same as Set, but dont store uniques
    // Store Sorted and Duplicates too

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);  //all 1 will be erased this time
    int cnt = ms.count(1);

    ms.erase(ms.find(1));  //it will find the iterate(address of 1) and then erase, so only erasing element of that address

    // ms.erase(ms.find(1), ms.find(1)+2);  if we want to range from 1st element to 2nd
    // but its wrong, as it multiset is TREE container; therefor its iterators are Bidirectional (++it, --it), it wont support +1, +2 type!
    auto it = ms.find(1);
    ms.erase(it, next(it, 2));
}

void unOrderedSet(){
    //Unique but not Sorted
    //lower_bound and upper_bound doesnot work here, rest all the functions are same
    //here all the operations are genrally in O(1), in rare scenario if goes to worst case, then it just O(n)
    unordered_set<int> so;

}

int main(){
    return 0;
}