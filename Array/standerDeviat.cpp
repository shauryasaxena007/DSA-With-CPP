#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n = 10;
    double data[n];
   
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>data[i];
    }
    double sum = 0.0;
    for(int i=0;i<n;i++){
        sum += data[i];
    }
    double mean = sum/n;
    double squaredDiff = 0.0;
    for(int i=0;i<n;i++){
        squaredDiff += (data[i] - mean) * (data[i] - mean);
    }
    double variance = squaredDiff / n;
    double standardDeviation = sqrt(variance);
    cout<<"Standard Deviation: "<<standardDeviation<<endl;
    return 0;
}