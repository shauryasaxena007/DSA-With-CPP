#include<iostream>
using namespace std;
int fib(int n){
    if(n<=0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1) + fib(n-2);

}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num < 0){
        cout<<"Please enter a non-negative integer."<<endl;
    }
    else{
    cout<<"Fibonacci number is: "<<num<<endl;
    for(int i=0; i<num; i++){
        cout<<fib(i)<<" ";
    }
}
    return 0;
}