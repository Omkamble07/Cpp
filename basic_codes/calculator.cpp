#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter numbers: " << endl;
    cin >> a >> b;

    while (true)
    {
        cout << "-------------------------------------" << endl;
        cout << "enter choice" << endl;
        cout << "1.sum \n2.substract \n3.multiplication \n4.div \n5.modulo \n6.exit" << endl;

        int ch;
        cin >> ch;
        cout << "result :> " << endl;

        switch (ch)
        {
        case 1:
            cout << "sum: " << (a + b) << endl;
            break;

        case 2:
            cout << "sub: " << (a - b) << endl;
            break;

        case 3:
            cout << "multiplication: " << (a * b) << endl;
            break;

        case 4:
            cout << "div: " << (a / b) << endl;
            break;

        case 5:
            cout << "modulo: " << (a % b) << endl;
            break;

        case 6:
            cout << "program is stop " << endl;
            return 0;

        default:
            break;
        }
    }

    return 0;
}