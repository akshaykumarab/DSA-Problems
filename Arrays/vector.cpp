#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr;

    // int ans=(sizeof(arr)/sizeof(int));

    // cout<<ans<<endl;
    //cout<<arr.size()<<endl;
    //cout<<arr.capacity()<<endl;

//insert
    arr.push_back(5);
    arr.push_back(6);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


//Remove /delete
    arr.pop_back();
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" "<<endl;
    }


    int n;
    cin>>n;
    cout<<"Enter the value of n"<<endl;

    vector<int>brr(n, -101);
    cout<<"Size of b "<<brr.size()<<endl;
    cout<<"Capacity of b "<<brr.capacity()<<endl;

for(int i=0; i<brr.size(); i++){
    cout<<brr[i]<<" ";
}
cout<<endl;


        cout<<"Printing crr"<<endl;
         vector<int>crr{10,20,40,50};

    for(int i=0; i<crr.size(); i++){
    cout<<crr[i]<<" "<<endl;
         }
         cout<<"Vector crr is Empty or not "<<crr.empty() <<endl;
cout<<endl;


    return 0;
    }