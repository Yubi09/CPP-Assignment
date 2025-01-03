#include<bits/stdc++.h>
using namespace std;

int minElement(int arr[], int n){
    if(n==1){
        return arr[0];
    }
    return min(arr[n-1], minElement(arr, n-1));
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The minimum element of the array is: "<<minElement(arr, n);
    return 0;
}