#include<iostream>
using namespace std;

int main(){

    int arr[3][3];

    int brr[3][3]={{1,2,3},{4,5,6},{2,4,8}};
   cout<< brr[2][2]<<endl;

// ROWWISE
   for(int i=0; i<3; i++){
    // for every  row, we need to print value in each column
    for(int j=0; j<3; j++){
        cout<< brr[i][j]<<" ";
    }
    cout<<endl;
   }

   //COLUMNWISE
   for(int i=0; i<3; i++){
    // for every  row, we need to print value in each column
    for(int j=0; j<3; j++){
        cout<< brr[j][i]<<" ";
    }
    cout<<endl;
   }

return 0;
}