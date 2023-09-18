#include<iostream>
#include<vector>
using namespace std;

int findunique(vector<int>arr){
    int ans=0;

    for(int i=0; i<arr.size(); i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements"<<endl;
    //input
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int uniqueElement= findunique(arr);
    cout<<"Unique Element is "<<uniqueElement<<endl;


    return 0;
}