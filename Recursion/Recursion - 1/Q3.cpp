#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
    if(n==1){
        return true;
    }
    if(n%2!=0 || n==0){
        return false;
    }
    return isPowerOfTwo(n/2);
}

int main(){
    int n;
    cin>>n;
    if(isPowerOfTwo(n)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}