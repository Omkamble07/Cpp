#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter the character :" << endl;
    cin >> ch;

    if (ch >= 65 && ch <= 90){
        cout << "uppercase" << endl;
    }else{
        cout << "lowercase" << endl;
    }
    return 0;
}