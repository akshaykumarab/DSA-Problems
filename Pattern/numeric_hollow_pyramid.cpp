#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
        //spaces
        cout<<" ";
        }

        //numbers with spaces in bw
        int start=1;
        for(int col=0; col<2*row+1; col++){
            //first row & last row
            if(row==0 || row==n-1){
                if(col%2==0){
                //even
                cout<<start;
                start=start+1;
                }
                else{
                    //odd
                    cout<<" ";
                }   
                }
                else{
                    //first col
                    if(col ==0){
                        cout<<1;
                    }
                    else if(col==2*row){
                        cout<<row+1;
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
            cout<<endl;
               
    }
    
}