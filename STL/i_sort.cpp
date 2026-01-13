#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    //They are Same
    if(p1.first > p2.first) return true;
    return false;
}

void algo(){
    //Sorting

    int arr[] = {1,4,8,3};
    sort(arr, arr + 4);               //pointer to the first and one past last element [star, end)
    sort(arr+2, arr+4);               //if want to sort any particular section only
    sort(arr, arr+4, greater<int>());   //sorts in decending order, using () to convert it into object, greater<int>() is a callable functor

    vector<int> v = {3,6};
    sort(v.begin(), v.end()); //for Vector

    //first sort according to second element and if second-elements are same, sort according to first element
    pair<int, int> pArr[] = {{1,2}, {2,1}, {4,1}};
    sort(pArr, pArr+3, comp);  //created custom comparator for it


    int num = 7;                          //32 bits: 000000........111
    int count = __builtin_popcount(num);  //3 (as three 1's are there)

    int num = 6;                          //32 bits: 00000.......110
    int count = __builtin_popcount(num);  //2 (as two 1's are there)

    //Permutation
    // Here permuatation starts from Dictionary Order: 123, 132, 213, 231, 312, 321, null
    string s = "123";
    do{
        cout<< s << endl;
    } while(next_permutation(s.begin(), s.end()));

    //but when starts from, unordered num;
    string s1 = "231";    //It will go: 312, 321, null, So should start it from Sorted
    sort(s1.begin(), s1.end());

    int arr[] = {1,5,3,8,2};
    int n = 5;
    int maxi = *max_element(arr, arr+n);
}

int main(){
    return 0;
}