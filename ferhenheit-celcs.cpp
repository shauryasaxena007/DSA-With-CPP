#include<iostream>
using namespace std;
int main(){
    double fer, cel;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>fer;
    cel = (fer - 32) * 5.0 / 9.0;
    cout<<"Temperature in Celsius: "<<cel<<endl;

    return 0;
}