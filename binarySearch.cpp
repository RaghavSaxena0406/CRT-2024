#include<bits/stdc++.h>
using namespace std;

int bsearch(vector<int> arr, int x){
    int n = arr.size();
    int s=0, e=n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid] < x){
            s = mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    int n,x;
    cout << "Size: ";
    cin >> n;
    vector<int> arr;
    // for(int &i:arr){
    //     cin >> i;
    // }
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << "Key: ";
    cin >> x;
    cout << "Key " << x << " is present at index: " << bsearch(arr,x) << endl;
}