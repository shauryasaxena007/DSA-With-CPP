#include<iostream>
using namespace std;
bool isPalindrome(int n, int org, int rev){
    if(n==0){
        return org==rev;
    }
    int d = n%10;
    rev=rev*10+d;
    return isPalindrome(n/10,org,rev);
}
bool checkPalindrome(int n){
    if(n<0){
        return false;
    }
    return isPalindrome(n, n, 0);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(checkPalindrome(n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}