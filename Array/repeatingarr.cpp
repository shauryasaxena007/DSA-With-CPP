#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,20,10,50,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        bool isduplicate = false;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                isduplicate = true;
                break;
            }
        }
        if(isduplicate){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}