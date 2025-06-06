#include <iostream>
using namespace std;

int main(){
    int n = 4;

    // top 
    for(int i=0; i<n; i++){
        
        // " * " 
        for(int j=0; j<i+1; j++){
            cout << "*";
        }

        // spaces
        int space = n-i ;
        for(int j=1; j<space ;j++){
            cout << " ";
        }

        for(int j=1; j<space ;j++){
            cout << " ";
        }

        for(int j=0; j<i+1; j++){
            cout << "*";
        }

        cout << endl;
    }

    // bottom
    for(int i=n-1; i>=0; i--){
        
        // " * " 
        for(int j=0; j<i+1; j++){
            cout << "*";
        }

        // spaces
        int space = n-i ;
        for(int j=1; j<space ;j++){
            cout << " ";
        }

        for(int j=1; j<space ;j++){
            cout << " ";
        }

        for(int j=0; j<i+1; j++){
            cout << "*";
        }

        cout << endl;
    }

}