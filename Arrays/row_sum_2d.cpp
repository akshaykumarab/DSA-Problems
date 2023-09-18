#include<iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int rows, int cols){
     cout<<"Print rowwise sum"<<endl;

     for(int i=0; i<rows; i++){
        int sum=0;
        for(int j=0; j<cols; j++){
            sum=sum+arr[i][j];   // For colwise replace i and j
        }
        cout<<sum<<endl;
     }
}

     int main(){

        int arr[3][3];
        int rows=3;
        int cols=3;

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                cin>>arr[i][j];
            }
        }

        printRowWiseSum(arr,rows,cols);
     
}