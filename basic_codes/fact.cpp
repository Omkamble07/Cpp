#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int fact = 1, i = 1;
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }

    cout << "Factorial is: " << fact << endl;
    return 0;
}
