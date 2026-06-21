#include<iostream>
using namespace std;
int main(){
    int n, sum = 0, temp, remainder;
    cout<<"Enter a number: ";
    cin>>n;
    temp =n;
    while(temp>0){
        remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp /= 10;
    }
    if(sum == n){
        cout<<n<<" is an Armstrong number."<<endl;  
     }
    else{
        cout<<n<<" is not an Armstrong number."<<endl;
    }
    return 0;
}