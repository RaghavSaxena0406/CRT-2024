#include<iostream>
using namespace std;

long long sumofdigit(long long n){
    if(n>=0 && n<=9){
        return n;
    }

    return (n%10)+sumofdigit(n/10);
}

int main(){
    long long n;
    cin >> n;
    cout << sumofdigit(n) << endl;
}