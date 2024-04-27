#include<iostream>
using namespace std;

int getMax(int arr[], int start, int end){
    if(start == end){
        return arr[start];
    }
    int mid = start + ((end-start)/2) ;
    int max1,max2;
    
    max1 = getMax(arr,start,mid);
    max2 = getMax(arr,mid+1,end);

    
    return (max1 > max2) ? max1 : max2;
}

int getMin(int arr[], int start, int end){
    if(start == end){
        return arr[start];
    }
    int mid = start + (end - start)/2;
    int min1 = getMin(arr,start,mid);
    int min2 = getMin(arr, mid+1, end);

    return (min1 < min2) ? min1 : min2;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    cout << "Max: " << getMax(arr,0,size-1) << endl;
    cout << "Min: " << getMin(arr,0,size-1) << endl;
}