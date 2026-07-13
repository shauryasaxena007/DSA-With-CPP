#include<iostream>
using namespace std;
void capitalize(string &str){
 bool newWord = true;
 for(char &c : str){
        if(newWord && isalpha(c)){
            c = toupper(c);
            newWord = false;
        } else if(c == ' '){
            newWord = true;
        }
    }
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    capitalize(str);
    cout<<"String after capitalizing first letter of each word: "<<str<<endl;
    return 0;
}