#include<iostream>
using namespace std;
bool isprime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int start, end;
    cout<<"Enter the starting number : ";
    cin>>start;
    cout<<"Enter the ending number : ";
    cin>>end;
    for(int i = start; i <= end; i++){
        if(isprime(i)){
            cout<<i<<" "<<endl;
        }
    }
    cout<<"Prime numbers between "<<start<<" and "<<end<<" are : "<<endl;
    return 0;
}