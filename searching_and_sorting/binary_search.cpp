#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        int element=arr[mid];

        if(element==target){
            return mid;
        }
        else if(target<element){
            //Search left
            end=mid-1;
        }
        else{
            //Search right
            start=mid+1;
        }
        mid=start+(end-start)/2;

    }
    return -1;
}


int main(){

    int arr[]={2,4,6,8,12,16};
    int size=7;
    int target;
    cin>>target;

    int indexofTarget=binarySearch(arr,size,target);

    if(indexofTarget==-1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Target found at "<<indexofTarget<<" index"<<endl;
    }
    return 0;
}