#include<iostream>
using namespace std;
int main(){
    int  num;
    cout<<"enter a number which you want to check  even or odd : "<<endl;
    cin>>num;
    if((num&1)==0){
        cout<<"the number is even :"<<num<<endl;
    }
    else{
        cout<<"the number is odd :"<<num<<endl;
    }
    return 0;
}