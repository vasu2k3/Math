#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n==1)
    return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<isPrime(n);
}