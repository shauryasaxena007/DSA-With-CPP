#include<iostream>
#include<string>
using namespace std;
char nextL(char c){
    if(isalpha(c)){
        if(c == 'z') return 'a';
        if(c == 'Z') return 'A';
        return c + 1;
    }
    return c;
}
string nextLetter(string str){
    string result;
    for(char c : str){
        result += nextL(c);
    }
    return result;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    string result = nextLetter(str);
    cout<<"String after replacing each letter with its next letter: "<<result<<endl;
    return 0;
}