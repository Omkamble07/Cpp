// swap 2 numbers without using third variable :

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;

    a = a + b; // a = 10 + 5 = 15
    b = a - b; // b = 15 - 10 = 5
    a = a - b; // a = 15 - 5 = 10

    cout << "a: " << a << ", b: " << b << endl; // a=10 , b=5

    // ---------------------------------------

    int n1, n2;
    cout << "enter 2 numbers: " << endl;
    cin >> n1 >> n2;

    cout << "before swapping: " << "n1: " << n1 << ", n2: " << n2 << endl;

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    cout << "after swapping: " << "n1: " << n1 << ", n2: " << n2 << endl;

    return 0;
}