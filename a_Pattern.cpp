// ABCD
// ABCD
// ABCD
// ABCD
cout<< char('A' + j); //Mine

// OR
int main(){
    int m = 6;
    for(int i = 0; i<m; i++){
        char ch = 'A';
        for(int j =0; j<m; j++){
            ch = ch + j;  //implicitly converting into int, and doing calculations
            cout<< ch;
        }
        cout<< endl;
    }
    return 0;
}


// 1 2 3
// 4 5 6
// 7 8 9 
int num = 1;
    for(int i = 0; i<3; i++){
        for(int j =0; j<3; j++){
            cout<< num;   
            num++;
            // OR directly, cout<< num++; {as num is incrementing after printing, Post Increment}
        }
        cout<< endl;
    }


// ABCD
// EFGH
// IJKL
// MNOP
int m = 4;
    char num = 'A';
    for(int i = 0; i<m; i++){
        for(int j =0; j<m; j++){
            cout<< num++;
        }
        cout<< endl;
    }


// A
// BB
// CCC
// DDDD
int n = 4;
    char ch = 'A';
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<< ch;
        }
        ch = ch + 1;
        cout<< endl;
    }


// 1111
//  222
//   33
//    4
#include<iostream>
using namespace std;
int main(){
    int a = 4;
    for(int i = 1; i<=a; i++){
        for(int k = 1; k<=i-1; k++){
            cout<<" ";
        }
        for(int j = a-i+1; j>0; j--){
            cout<< i;
        }
        cout<< endl;
    }
    return 0;
}