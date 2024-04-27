#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    int size;
    cout << "Enter the size of the Array: ";
    cin >> size;
    for(int i=0; i<size; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int tripletSum;
    cin >> tripletSum;
    for(int i=0; i<size-2;i++){
        for(int j=i+1; j<size-1; j++){
            for(int k=j+1; k<size; k++){
                if((arr.at(i) + arr.at(j) + arr.at(k)) == tripletSum){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

// #include<iostream>
// #include<bitset>
// using namespace std;
// int main(){
//     vector<int> arr;
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     for(int i=0; i<size; i++){
//         int temp;
//         cin >> temp;
//         arr.push_back(temp);
//     }

    
// }