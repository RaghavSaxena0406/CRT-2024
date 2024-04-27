#include<bits/stdc++.h>
using namespace std;

class message{
    string str;
    public:
    string hi();
    string bye();
};
int main(){
    cout << "Welcome to Jaipur" << endl;
    message *m1 = new message();
    m1->hi();
    m1->bye();
}
string inline message::hi(){
    str = "hi";
    return str;
}

string inline message::bye(){
    str = "bye";
    return str;
}