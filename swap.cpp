#include<iostream>
using namespace std;
int main(){
    int a=20;
    int b=30;
    // cout<<"Before swapping a is "<<a<<" and b is "<<b<<endl;
    // swap(a,b);
    // cout<<"After swapping a is "<<a<<" and b is "<<b<<endl; 
    // return 0;

    int temp;
    //temp is hold one value in swapping procee
    cout<<"Before swapping a is "<<a<<" and b is "<<b<<endl;
    temp = a;
    a=b;
    b=temp;
    cout<<"After swapping a is "<<a<<" and b is "<<b<<endl;
    return 0;
}