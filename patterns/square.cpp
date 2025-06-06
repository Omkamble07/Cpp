#include <iostream>
using namespace std;

// square " * " :>
// int main()
// {
//     int n = 5;
//     for(int i=0 ; i<n ; i++){
//         for(int j=0; j<n ;j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// sqaure numbers :>
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++){
//         int num = 1;
//         for (int j = 0; j < n; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
// }

// sqaure characters :>
int main(){
    int n = 4;

    for (int i = 0; i < n; i++){
        char ch = 'A';
        
        for (int j = 0; j < n; j++){
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
        ch = ch + 1;
    }
}