#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int firstOccurence(vector<int>arr, int target){

    int s=0;
    int e=arr.size()-1;
       int mid=s+(e-s)/2;
       int ans=-1;

    while(s<=e){
        if(arr[mid]== target){
            //ans store and than left
            ans=mid;
            e=mid-1;
        }
        else if(target<arr[mid]){
            //left search
            e=mid-1;
        }
        else if(target>arr[mid]){
            //right search
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){

    vector<int>arr{1,3,3,3,3,4,4,4,4,6,7};
    int target =3;
    int ans=firstOccurence(arr,target);

    cout<<"Ans is "<<ans<<endl;

    auto ans2=lower_bound(arr.begin() , arr.end(), target);
    cout<<"Ans2 is "<<ans2-arr.begin()<<endl;


    return 0;
}