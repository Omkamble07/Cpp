#include <iostream>
using namespace std;

// numbers :>
/* 
int main(){
    int n = 4;

    for(int i=0; i<n; i++){

        // spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }

        // numbers
        for(int j=0; j<n-i; j++){
            cout << i+1 ;
        }

        cout<< endl;
    }
}
*/


// char :>
int main(){
    int n = 4;

    for(int i=0; i<n; i++){
        char ch = 'A' + i;

        // spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }

        // char
        for(int j=0; j<n-i; j++){
            cout << ch ;
        }

        ch = ch - 1;
        cout<< endl;
    }
}