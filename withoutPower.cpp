#include<iostream>
using namespace std;
int main(){
    int base, expo;
    cout<<"Enter the base:";
    cin>>base;
    cout<<"Enter the exponent:";
    cin>>expo;
    int result = 1;
    for(int i=0; i<expo; i++){
        result = result * base;
    }
    cout<<"The result is: "<<result<<endl;
    return 0;

}