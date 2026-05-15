#include<iostream>
using namespace std;
int main(){
    char Ch, islower, isUpper;
    cout<<"Enter a character: ";
    cin>>Ch;
    if (islower = (Ch=='a' || Ch=='e' || Ch=='i' || Ch=='o' || Ch=='u')){
        cout<<Ch<<" is a lowercase vowel."<<endl;
    }
    else if (isUpper = (Ch=='A' || Ch=='E' || Ch=='I' || Ch=='O' || Ch=='U')){
        cout<<Ch<<" is an uppercase vowel."<<endl;
    }
    else if(!isalpha(Ch)){
        cout<<Ch<<" is not an alphabet."<<endl;
    }
    else{
        cout<<Ch<<" is not a vowel."<<endl;
    }
   
    return 0;
}