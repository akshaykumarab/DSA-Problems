#include<iostream>
using namespace std;

int main(){

    

    int arr[4][3];
       int rows=4;
       int cols=3;

       for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
       }
   

// ROWWISE
cout<<"Printing row wise"<<endl;
   for(int i=0; i<rows; i++){
    // for every  row, we need to print value in each column
    for(int j=0; j<cols; j++){
        cout<< arr[i][j]<<" ";
    }
    cout<<endl;
   }

   //COLUMNWISE
//    cout<<"Printing columnwise"<<endl;
//    for(int i=0; i<rows; i++){
//     // for every  row, we need to print value in each column
//     for(int j=0; j<cols; j++){
//         cout<< arr[j][i]<<" ";
//     }
//     cout<<endl;
 //  }

return 0;
}