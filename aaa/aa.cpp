#include <iostream>
using namespace std;
int main(){
  
   int n;
   cin>>n;
    for(int row=0; row<n; row=row+1)
    {
       for(int col=0; col<n-row; col=col+1)
         {
           cout<<col+1;
        }
      cout<<endl;
    }

  for(int row=0; row<n; row=row+1)
    {
      for(int col=0; col<row+1; col=col+1)
        {
          cout<<col+1;
        }
      cout<<endl;
    }
  

  for(int row=0; row<n; row=row+1){
    for(int col=0; col<n-row; col=col+1){
      cout<<" * ";
    }
  cout<<endl;
  }
  int n;
  cin>>n;

  for(int row=0; row<n; row=row+1){
    for(int col=0; col<row+1; col=col+1){
      cout<<" * ";
    }
  cout<<endl;
  }
  int rowcount,colcount;
  cin>>rowcount;
  cin>>colcount;
  for (int row=0;row<rowcount;row=row+1)
    {
      if(row==0 || row==rowcount-1){
        for (int col=0;col<5;col=col+1)
          {cout<<" * " ;}
      }
      else{
        cout<<" * ";
        for(int i=0;i<colcount-2;i=i+1){
          cout<<"   ";
        }
          cout<<" * ";
      }
        cout<<endl;
      
    }
  int n;
  cin>>n;
  for (int row=0; row<n; row=row+1)
    {
      for (int col=0; col<n; col=col+1)
        {
          cout<<" * ";
        }
      cout<<endl;
    }
  
  for (int row=0; row<3; row=row+1)
    {
      for (int col=0; col<5; col=col+1)
        {
          cout<<"*";
        }
      cout<<endl;
    }
  
  if(cout<<"Babbar")
  {
    cout<<"LOve";
  }
  for (int i=5; (i>=0 && i<=10); i=i+1)
    {
      cout<<i<<endl;
    }
  for (int i=100; i>0; i=i/2)
    {
      cout<<i<<endl;
    }
  for (int i=1; i<10; i=i*2)
    {
      cout<<i<<endl;
    }
for(int i=0; i<5; i=i+1)
{
  cout<<"Akshaykumar"<<endl;
}
  for(int i=0; i<5; i=i+1)
    {
      cout<<i;
    }
  for(int i=5; i>0; i=i-1)
    {
      cout<<i;
    }
   
int bronum;
cin>> bronum;
if(bronum==0){
  cout<<"Bat banjayegi";
}
else{
  cout<<"Bat nhi banegi";


int main() {
  int marks;
  cin>>marks;

  if(marks>=90){
    cout<<"A";
  }
  else if(marks>=80){
    cout<<"B"; 
  }
  else if(marks>=60){
    cout<<"C";
  }
  else if(marks>=40){
    cout<<"D";
  }
  else{
    cout<<"F";
  }
  
  int score;
  cout<<"Enter the number:"<<endl; 
  cin>>score;
  if (score<300){
    cout<<"India wins"<<endl;
  }
  else{
  cout<<"Pakistan wins";
  }
    }