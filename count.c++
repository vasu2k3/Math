#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int countDigits(int x){
    int res=0;
    while(x>0){
    x=x/10;
    res++;}
    return(res);
}
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<countDigits(n);
}