#include<bits/stdc++.h>
using namespace std;

void explainVec(){
    vector<int> v;
    v.push_back(6);
    v.emplace_back(7);

    vector<pair<int,int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(3,6);

    vector<int> v3(5, 100);  //100 100 100 100 100
    vector<int> v4(v3);      //copying v3 inside v4

    //Acessing Vector Elements
    cout<< v[1] << " " << v.at(1); //both method correct
    cout<< v.back();  //last element

    //Acessing using Iterator
    //::iterator is like a pointer, which points to Memory address, Not Element
    //"it" is an iterator, pointing to the memory address of first element of vector v
    vector<int>::iterator it = v.begin(); 
    it++;
    cout<< *(it) << " ";  //* derefrence opertor, gives the value stored in given memeory address

    it = it + 2;  //shifting by 2 positions

    // {10, 20, 30, 40}
    vector<int>::iterator it = v.end();  //but it points to one index after the last element, therefor to access last element it--
    vector<int>::reverse_iterator it = v.rend();  //reverseEnd, first reverse, then take element before end (as everything is reverse), therfore {40, 30, 20, 10} address before 10(element)
    vector<int>::reverse_iterator it = v.rbegin(); //reverseBegin, SAME, First reverse, then take the element after begin  

    // Vector Printing by Iterating
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<< *(it)<<" ";
    }

    //Alternate Shortcut
    for(auto it = v.begin(); it != v.end(); it++){   //according to data!, datatype automatically assigned here
        cout<< *(it) << " ";
    }

    //Using ForEach Loop
    for(auto it:v){
        cout<< it <<" ";
    }

    // {10, 20, 30, 40, 50, 60, 70}
    //Erasing Element
    //it will erase element at index 1th
    v.erase(v.begin() + 1);  //{10, 30, 40, 50, 60, 70}

    v.erase(v.begin()+1 , v.begin()+4); //{10, 60, 70}
    //need to give one index extra, as it will delete one index prior from the given last index (given last index is Excluded)

    //Insert Function
    vector<int> v(2, 100);             // {100, 100}
    v.insert(v.begin() + 1, 300);      // {100, 300, 100}
    v.insert(v.begin()+2, 2, 10);      // {100, 300, 10, 10, 100}

    //Copy Function
    vector<int> v2(2, 92);                      //{92, 92}
    v.insert(v.begin(), v2.begin(), v2.end());  //{92, 92, 100, 300, 10, 10, 100}

    //Size
    cout<< v.size();  //7

    //Popping last element
    v.pop_back();

    //Swaping Vectors {v1 = (1, 2) v2 = (3, 4)}
    // v1.swap(v2);

    v.clear();

    cout<< v.empty();  //True: if empty, False: if not empty
}

int main(){
    return 0;
}