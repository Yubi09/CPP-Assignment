#include<bits/stdc++.h>
using namespace std;

void printReverse(vector<int> &arr, int n){
    if(n == 0){
        return;
    }
    cout<<arr[n-1]<<" ";
    printReverse(arr, n-1);
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printReverse(arr, n);
    return 0;
}