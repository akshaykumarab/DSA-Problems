#include<iostream>
using namespace std;

char getGrade(int marks){
    if(marks>=90)
    return 'A';
    else if(marks>=80)
    return 'B';
    else if(marks>=70)
    return 'C';
    else if(marks>=60)
    return 'D';
    else 
    return 'E';
}


int main(){

    int marks;
    cout<<"Enter the marks: "<<endl;
    cin>>marks;

    char finalGrade=getGrade(marks);
    cout<<finalGrade<<endl;
    return 0;
}