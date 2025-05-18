#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter number: " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is even number" << endl;
    }
    else
    {
        cout << num << " is odd nuber" << endl;
    }

    return 0;
}