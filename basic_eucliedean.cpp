#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int gcf(int a,int b){
    while(a!=b){
        if(a>b)
            a=a-b;
        else
        b=b-a;
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter 2 numbers";
    cin>>a;
    cin>>b;
    cout<<gcf(a,b);
}