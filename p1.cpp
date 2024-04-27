#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *ptr = &a;
    cout << "ptr(addr of a): " << ptr << endl;
    cout << "*ptr(value at ptr) :" << *(ptr) << endl;
}