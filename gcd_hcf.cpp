#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a, int b){
    int res=min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        else
        res--;
    }
    return res;
}
int main(){
    int a,b;
    cout<<"Enter 2 number";
    cin>>a;
    cin>>b;
    cout<<gcd(a,b);
}