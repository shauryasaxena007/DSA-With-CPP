#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the square matrix: ";
    cin>>size;
    int matrix[size][size];
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"printing the matrix: "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int digsum = 0;
    for(int i=0;i<size;i++){
        digsum += matrix[i][i];
    }
    cout<<"The sum of the diagonal elements is: "<<digsum<<endl;
    return 0;

}