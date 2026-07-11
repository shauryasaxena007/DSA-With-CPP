#include<iostream>
using namespace std;
int main(){
    char str[100];
    char target;
    int freq = 0;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Enter a character to find its frequency: ";
    cin>>target;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==target){
            freq++;
        }
    }
    cout<<"Frequency of "<<target<<" is: "<<freq<<endl;
    return 0;
}