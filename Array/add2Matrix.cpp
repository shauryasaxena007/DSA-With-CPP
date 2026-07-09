#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the number of rows and columns: ";
    cin>>r>>c;
    int matrix[r][c], matrix2[r][c], sum[r][c];
    cout<<"Enter the elements of first matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Enter the elements of second matrix: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix2[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }
    cout<<"The sum of the two matrices is: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}