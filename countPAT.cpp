#include<iostream>
using namespace std;
int main(){
    int row = 5;
    int count = 1;
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}