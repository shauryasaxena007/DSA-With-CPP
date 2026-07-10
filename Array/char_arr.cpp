#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your name: ";
    char name[100];
    cin.getline(name,100);
    cout<<"Hello, "<<name<<"!"<<endl;
    return 0;

    // string para
    // cin.getline(name,para);
}