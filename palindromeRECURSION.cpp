#include<iostream>
using namespace std;
bool isPalindrome(int num, int org, int rev){
    if(num==0){
        return org==rev;
    }
    rev=rev*10+num%10;
    return isPalindrome(num/10, org, rev);
}
bool checkPalindrome(int num){
    if(num<0){
        return false;
    }
    return isPalindrome(num, num, 0);
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(checkPalindrome(num)){
        cout<<"The number is a palindrome."<<endl;
    }
    else{
        cout<<"The number is not a palindrome."<<endl;
    }
    return 0;
}