#include <iostream>
using namespace std;

int main()
{
    int first = 0, second = 1, next, n;

    cout << "enter the size of series" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << first << " , ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}