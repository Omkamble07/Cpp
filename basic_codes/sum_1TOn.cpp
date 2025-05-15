#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "enter num :" <<endl;
    cin>> n;

    int sum = 0 , count = 1;
    while(count <= n){
        sum = sum + count ;
        count++;
    }
    cout<< "sum of numbers: " <<sum <<endl;
    return 0;
}