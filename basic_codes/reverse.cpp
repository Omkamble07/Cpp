#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0, r;
    cout << "enter number:" << endl; // 1234
    cin >> num;

    while (num > 0)
    {
        r = num % 10;       // 4, 3 , 2 , 1
        rev = rev * 10 + r; // 0*10+4=4 , 4*10+3=43 , 43*10+2=432 , 432*10+1=4321
        num = num / 10;     // 123 , 12 , 1 , 0
    }

    cout << "reverse number: " << rev << endl;
    return 0;
}