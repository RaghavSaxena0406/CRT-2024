#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int roll;
    string name;

    public:                                 
    void input(){
        cout << "\nEnter the roll no: ";
        cin >> roll;
        cout << "\nEnter name: ";
        cin >> name;
    }
    inline void output(){                 //Compiler pura inline wala code copy kr dega calling wali jagh pr.
        cout << "\nROLL: " << roll <<endl;//time saved using inline
        cout << "NAME: " << name << endl; 
    }
};

int main(){
    student s1,s2; //IN STACK
    student *s3 = new student(); //LHS IN STACK

    cout << "Fill the data of s1 " << endl;
    s1.input();
    cout << "Fill the data of s2 " << endl;
    s2.input();
    cout << "Fill the data of s3 " << endl;
    s3->input();

    cout << "All data saved." << endl;

    s1.output();
    s2.output();
    s3->output();
}