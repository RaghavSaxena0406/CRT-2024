#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int fact = factorial(num);
    cout << "Factorial of " << num << " is: " << fact << endl;
    return 0;
    // int  a = 'a';
    // int b = '0';
    // cout << a << " " << b << " " << a-b;
}