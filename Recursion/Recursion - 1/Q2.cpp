#include<bits/stdc++.h>
using namespace std;

int sumOdd(int a, int b){
    if(a>b){
        return 0;
    }
    if(a%2==0){
        return sumOdd(a+1,b);
    }
    return a+sumOdd(a+2,b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<sumOdd(a,b);
    return 0;
}