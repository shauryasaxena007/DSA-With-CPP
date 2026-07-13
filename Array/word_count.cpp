#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
int wordCount = 0;
bool inWord = false;
    for(char c : str){
        if(c==' ' ){
            inWord= false;
        }
        else{
            if(!inWord){
                wordCount++;
                inWord = true;
            }
        }
    }
    cout<<"Number of words in the string: "<<wordCount<<endl;
    return 0;
}