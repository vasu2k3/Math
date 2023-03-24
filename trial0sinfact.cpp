#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int countZero(int n){
    int res=0;
for (int i=5;i<=n;i=i*5){
        res=res+n/i;
    }
    return(res);
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<countZero(n);
}
