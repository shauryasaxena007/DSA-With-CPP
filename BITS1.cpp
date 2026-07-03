#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number which you want to check the set bits for  : ";
    cin>>num;   
    int cnt = 0;
    while(num){
        cnt = cnt + (num & 1);
        num = num >> 1;
    }
    cout << cnt << endl;
    return 0;   
}