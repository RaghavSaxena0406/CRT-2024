#include<iostream>
using namespace std;
class abc
{
    int num;
    public:
        abc(){
            num = 0;
            cout << "Default Constructor" << endl;
        }
        abc(int n)
        {
            cout << "Parameterized Constructor" << endl;
            num = n;
        }
};

int main(){
    abc o1;
    abc o2(50);
}
