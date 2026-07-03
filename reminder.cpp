#include<iostream>
using namespace std;
int main(){
    int rem,divisor,dividend,quot;
    cout<<"Enter the dividend "<<endl;
    cin>>dividend;
    cout<<"Enter the divisor "<<endl;
    cin>>divisor;
    quot = dividend/divisor;
    rem = dividend%divisor;
    cout<<"The quotient is "<<quot<<endl;
    cout<<"The remainder is "<<rem<<endl;
    return  0;
    
}