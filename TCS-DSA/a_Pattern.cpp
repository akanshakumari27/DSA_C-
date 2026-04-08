// Input: 5
// Output:
//     *
//    ***  
//   *****
//  *******
// *********

int main() {
    int n; 
    cin>>n;
    for(int i = n; i>= 1; i--){
        for(int j = i-1; j>=1; j--){
            cout<<" ";
        }
        for(int j = n-i+1; j>=1; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
	return 0;
}
-----------------------------------------------------------------------------------------------------------------
// Input: n = 4
// Output: 
//          *******
//           *****
//            ***
//             *

int main(){
    int n; 
    cin>>n;
    for(int i =n; i>=1; i--){
        for(int j = n-i; j>=1; j--){
            cout<<" ";
        }
        for(int j = i; j>=1; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
------------------------------------------------------------------------------------------------------------------

//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 

int main() {
    int n; 
    cin>>n;
    for(int i = n; i>= 1; i--){
        for(int j = i-1; j>=1; j--){
            cout<<" ";
        }
        for(int j = n-i+1; j>=1; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i = 1; i<= n; i++){
        for(int j = i-1; j>=1; j--){
            cout<<" ";
        }
        for(int j = n-i+1; j>=1; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
	return 0;
}

//write 1st code, and rewrite again, revering second for-Loop