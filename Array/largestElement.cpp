#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid size"<<endl;
        return 0;
    }
    int element[100];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>element[i];
    }
    int largest=element[0];
    for(int i=1;i<n;i++){
        if(element[i]>largest){
            largest=element[i];
        }
    }
    cout<<"Largest element in the array: "<<largest<<endl;
    return 0;
}