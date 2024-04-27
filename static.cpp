#include<bits/stdc++.h>
using namespace std;
class abc{
    int x;
    static int count;
    public:
    static void show1(){
        cout << count << endl;
    }
    void show2(){
        cout << x << " " << count << endl;
    } 
};
int abc::count=10;
int main(){
    abc o1;
    abc::show1(); //special func ka special tarika // good practice
    o1.show2();
    o1.show1();  //bad practice
    return 0;
}