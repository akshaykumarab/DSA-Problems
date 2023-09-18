#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int main(){

    int arr[]={1,2,4,6,8,10};
    int sizea=6;
    int brr[]={3,4,5,6};
    int sizeb=4;

    vector<int>ans;

    for(int i=0; i<sizea; i++){
        
        ans.push_back(arr[i]);
    }

    for(int i=0; i<sizeb; i++){
           
        ans.push_back(brr[i]);
    }

 

          
    cout<<"Printing ans array "<<endl;
for(int i=0; i<ans.size(); i++)
{
if(ans[i]!=INT_MIN)
        cout<<ans[i]<<" ";
    }
          

}