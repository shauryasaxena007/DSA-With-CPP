#include<iostream>
using namespace std;
int findSum(int n){
    if(n==1){
        return 1;
    }
    return n + findSum(n-1);
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num <= 0){
        cout<<"Please enter a positive integer."<<endl;
    }
    else{
        int sum = findSum(num);
        cout<<"The sum of first "<<num<<" natural numbers is: "<<sum<<endl;
    }
    return 0;
}