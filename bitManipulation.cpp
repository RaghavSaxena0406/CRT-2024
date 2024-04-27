#include<iostream>
#include<bitset>
using namespace std;

int  countbit(int n){
    int c=0;
    int z= 1;
    while(n){
        //using right shift
        if(n&z){
            c++;
            n=n^z;
        }
        z=z<<1;
    }
    return c;
}

int main(){
    // int x=172;
    // int y = x & (x-1);
    // cout << "a = " << bitset<16>(x) << endl;
    // cout << "b = " << bitset<16>(x-1) << endl;
    // cout << "c = " << bitset<16>(y) << endl;

    // int x =172;
    // int y= x & ~(x-1);
    // cout << "a = " << bitset<16>(x) << endl;
    // cout << "b = " << bitset<16>(~(x-1)) << endl;
    // cout << "c = " << bitset<16>(y) << endl;

    int x=72;
    int cb = countbit(x);
    cout << bitset<16>(72) << endl;
    cout << cb << endl;

}