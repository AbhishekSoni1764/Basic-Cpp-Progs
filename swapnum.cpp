#include<iostream>
using namespace std;


void swap(int &a,int &b){    // using reference variables here a is pointing to x sp &a will point to address of x.
    a = a+b;
    b = a-b;
    a = a-b;
}
int main(){
    int x=5,y=4;
    cout<<"The value of x is "<<x<<" value of y is "<<y<<endl;
    swap(x,y);
    cout<<"The value of x is "<<x<<" value of y is "<<y<<endl;
    return 0;
}