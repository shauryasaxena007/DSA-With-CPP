#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int base, expo;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the exponent: ";
    cin>>expo;
    int result = 1;

    result = pow(base, expo);

    cout<<"The result is: "<<result<<endl;
    return 0;
}