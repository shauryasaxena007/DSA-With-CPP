#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char str[100];
    int vowels = 0, consonants = 0, digits = 0;
    cout<<"Enter a string: ";
    cin>>str;
    for(int i=0; str[i]!='\0'; i++){
        if(isalpha(str[i])){
            char ch = tolower(str[i]);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowels++;
            } else {
                consonants++;
            }
        }
         else if(isdigit(str[i])){
            digits++;
        }
    }
    cout<<"Number of vowels: "<<vowels<<endl;
    cout<<"Number of consonants: "<<consonants<<endl;
    cout<<"Number of digits: "<<digits<<endl;
    return 0;
}