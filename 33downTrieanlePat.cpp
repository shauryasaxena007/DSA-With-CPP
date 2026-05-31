#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the down triangle pattern: ";
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            //for(int j=i; j>0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}