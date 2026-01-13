// List is similar to Vector, But it also provides Front Operations (u can perform operations in front)

#include<bits/stdc++.h>
using namespace std;

void myList(){
    list<int> ls;
    ls.push_back(3);    //{3}
    ls.emplace_back(6); //{3, 6} 

    ls.push_front(12);    //{12, 3, 6}
    ls.emplace_front(18); //{18, 12, 3, 6}

    // Rest all functions are same as Vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void myDeque(){
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(3);

    dq.push_front(16);
    dq.emplace_front(19);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    //Rest functions are same as Vector
    //begin, end, rbegin, rend, clear, insert, size, swap
}

int main(){
    return 0;
}