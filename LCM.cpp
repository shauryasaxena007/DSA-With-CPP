#include<iostream>
using namespace std;
int main(){
    int a, b, LCM;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for(int i=1; i<=a*b; i++){
        if(i % a == 0 && i % b == 0){
            LCM = i;
            break;
        }
    }
    cout<<"LCM of "<<a<<" and "<<b<<" is: "<<LCM<<endl;
    return 0;
}