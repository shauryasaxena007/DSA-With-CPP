#include<iostream>
using namespace std;
int main(){
    int n, sum =0;
    cout<<"Enter a positive integer: ";
    cin>>n;
    while(n>0){
        int digit = n%10;
        sum = sum*10 + digit;
        n /= 10;
    }
    cout<<"The reversed number is: "<<sum<<endl;
    return 0;
}