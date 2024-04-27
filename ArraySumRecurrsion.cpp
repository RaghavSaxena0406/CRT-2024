#include<iostream>
using namespace std;

int arrSum(int arr[], int size){
    if(size==0){
        return 0;
    }
    return arr[size-1] + arrSum(arr, size-1); 
}

int main(){
    int *arr;
    int n;
    cin >> n;
    arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum = arrSum(arr,n);
    cout << sum << endl;
}