#include<iostream>
#include<string>
using namespace std;
string largestWord(string str){
    string largest, current;
    for(char c : str){
        if(c == ' ' || c == '\n' || c == '\t'
        ){
            if(current.length() > largest.length()){
                largest = current;
            }
            current = "";
        } 
        else {
            current += c;
        }
    }
    if(current.length() > largest.length()){
        largest = current;
    }
    return largest;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    string largest = largestWord(str);
    cout<<"Largest word in the string: "<<largest<<endl;
    return 0;
}