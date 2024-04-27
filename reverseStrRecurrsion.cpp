#include<iostream>
using namespace std;

void reverse_str(string &text, int s, int e){
    if(s >= e){
        return;
    }

    swap(text[s],text[e]);

    reverse_str(text,s+1,e-1);
}

int main(){
    string text;
    cout << "Input a String: ";
    // cin >> text;
    getline(cin,text);

    reverse_str(text, 0, text.length()-1);
    cout << "Reversed String: " << text << endl;
    return 0;
}