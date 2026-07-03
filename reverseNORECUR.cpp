#include<iostream>
using namespace std;
int reverse(int num, int rev){
    if(num==0){
        return rev;
    }
    rev=rev*10+num%10;
    return reverse(num/10, rev);
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int reversedNum = reverse(num, 0);
    cout<<"The reversed number is: "<<reversedNum<<endl;
    return 0;
}