#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin>>str;
    char result[100];
    int resultIndex = 0;
    for(int i=0; str[i]!='\0'; i++){
        if(isalpha(str[i])){
            result[resultIndex++] = str[i];
        }
    }
    result[resultIndex] = '\0';
    cout<<"String after removing symbols: "<<result<<endl;
    return 0;
}
