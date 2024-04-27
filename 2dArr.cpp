#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr;
    int n;
    cout << "Enter the no of rows and columns: ";
    cin >> n;
    cout << "Enter the array: ";
    for(int i=0; i<n; i++){
        vector<int> s;
        arr.push_back(s);
        for(int j=0;j<n;j++)
        {
            arr[i].push_back(j);
        } 
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}