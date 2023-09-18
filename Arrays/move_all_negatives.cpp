#include<iostream>
#include<vector>
using namespace std;

int main(){

    int a[]={1,2,-3,4,-5,6,-10,-12,20,15,-7};
    int n=sizeof(a)/sizeof(int);

    int l=0;
    int h=n-1;


    while(l<=h){
        if(a[l]<0){
            l++;

        }
         else if(a[h]>0){
            h--;
        }
        else{
            swap(a[l],a[h]);
        }
        
    }
    for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
    }
    return 0;
}