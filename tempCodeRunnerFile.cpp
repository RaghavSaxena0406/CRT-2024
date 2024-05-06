#include<iostream>
using namespace std;

class test{
    public:
    void show(){
        cout << "Hello1";
    }
    void show(int x){
        cout << "Hello2";
    }
    void show(char y){
        cout << "Hello3";
    }
};

int main(){
    test t;
    t.show('a');
    return 0;
}