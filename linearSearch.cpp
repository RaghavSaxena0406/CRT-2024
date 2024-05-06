#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> arr, int n, int x){
    int i;
    for(i=0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,x;
    cout << "size: ";
    cin >> n;
    vector<int> a(n);
    
    for(int &i:a){
        cin >> i;
    }
    cout << "Key: ";
    cin >> x; //key
    cout << x << " is at Index: " << search(a,n,x) << endl;
}