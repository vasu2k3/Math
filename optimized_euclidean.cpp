#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int gcf(int a,int b){
        if(b==0)
            return a;
        else
        return gcf(b,a%b);
}
int main(){
    int a,b;
    cout<<"Enter 2 numbers";
    cin>>a;
    cin>>b;
    cout<<gcf(a,b);
}