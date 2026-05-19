#include<iostream>
using namespace std;
int main(){
    int n,x,y,z;
    x=0;
    y=1;
    cout<<"Enter the number of terms: ";
    cin>>n;
    if(n<=0){
        cout<<"Please enter a positive integer."<<endl;
        return 1;
    }
    cout<<"Fibonacci Series: "<<x<<" "<<y<<" ";
    for(int i=2; i<n; i++){
        z=x+y;
        cout<<z<<" ";
        x=y;
        y=z;
    }
    cout<<endl;
    return 0;
}