#include<iostream>
using namespace std;

int add(int a , int b){
    int result=a+b;
    return result;
}
int main(){

    int a;
    cout<<"Enter the value of a:";
    cin>>a;

    int b;
    cout<<"Enter the vale of b:";
    cin>>b;

    int sum=add(a,b);
    cout<<"Addition result is: "<<sum<<endl;
    

}