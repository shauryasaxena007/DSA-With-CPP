#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid size"<<endl;
        
    }
    int element[100];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>element[i];
    }
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=element[start];
        element[start]=element[end];
        element[end]=temp;
        start++;
        end--;
    }
    cout<<"Reversed array: ";
    for(int i=0;i<n;i++){
        cout<<element[i]<<" ";
    }
    cout<<endl;
    return 0;
}