#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter num :" << endl;
    cin >> num;

    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            cout << "not prime" << endl;
            return 0;
        }else{
            i++;
        }
    }
    cout <<"given number is prime" << endl;
    return 0;

}