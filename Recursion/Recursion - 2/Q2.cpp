#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    if(n==0){
        return 0;
    }
    return (n%10)*pow(10, floor(log10(n))) + reverse(n/10);
}

int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}