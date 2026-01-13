// Stack follow LIFO

#include<bits/stdc++.h>
using namespace std;

void myStack(){
    // stack<int> st = {10,20,30,40};  NOT possible: as Stack is just Container Adapter, not Container: Only push will work

    // NOTICE: elements are adding from the TOP
    stack<int> st;
    st.push(10);    // {10}
    st.push(20);    // {20, 10}
    st.push(30);    // {30, 20, 10}
    st.emplace(40); // {40, 30, 20, 10} 

    cout<< st.top(); // 40
    st.pop();
    st.size();
    st.empty();

    stack<int> st2;
    st.swap(st2);   //there elements will get swap, st elements in st2 and st2 elements in st
}

int main(){
    return 0;
}