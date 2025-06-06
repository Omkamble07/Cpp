#include <iostream>
using namespace std;

// " * " :>
// int main(){
//     int n = 4;
// 
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// floyd's triangle :>
// int main(){
//     int n = 4;
//     int num = 1;
// 
//     for(int i=0; i<n; i++){
// 
//         for(int j=0; j<i+1; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
// 
//     }
// }

// floyd's char :>
// int main(){
//     int n = 4;
//     char ch = 'A';
// 
//     for(int i=0; i<n; i++){
// 
//         for(int j=0; j<i+1; j++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }


// reverse triangle :>
// int main(){
//     int n = 10;
// 
//     for(int i=0; i<n; i++){
// 
//         for(int j=i+1; j>=1; j--){
//             cout << j << " ";
//         }
//    
//         cout << endl;
//     }
// }


// numbers:>
// int main(){
//     int n = 4;
// 
//     for(int i=0; i<n; i++){
// 
//         for(int j=1; j<=i+1; j++){
//             cout << j << " ";
//    
//         }
//         cout << endl;
// 
//     }
// }


// reverse char :>
int main(){
    int n = 4;
   

    for(int i=0; i<n; i++){
         char ch = 'A' + i; ;
        for(int j=0; j<i+1; j++){
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}
