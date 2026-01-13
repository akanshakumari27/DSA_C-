// Direct method: 2 pointers at First and Last, and keep reversing each and move forward, untill reaches to mid

#include<bits/stdc++.h>
using namespace std;
void f(int i, int arr[], int num){
    if(i >= num/2){
        return;
    }
    swap(arr[i], arr[num-i-1]);
    f(i+1, arr, num);
}
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i = 0; i<num; i++){
        cin>>arr[i];
    }
    f(0, arr, num);
    for(int i =0; i<num; i++){
        cout<<arr[i];
    }
    return 0;
}