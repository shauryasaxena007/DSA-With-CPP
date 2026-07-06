#include<iostream>
using namespace std;
int reverse(int n, int rev){
    if(n==0){
        return rev;
    }
    int d = n%10;
    rev=rev*10+d;
    return reverse(n/10,rev);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<reverse(n,0)<<endl;
    return 0;
}