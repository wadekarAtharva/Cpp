// C++ Program to Swap Values of Two Variables.
#include<iostream>
using namespace std;


int main(){

    int num1,num2,temp;

    cout<<"Enter Num1:";
    cin>>num1;

    cout<<"Enter Num2:";
    cin>>num2;

    cout<<"Before swapping:"<<num1<<" "<<num2<<endl;

    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"After swapping:"<<num1<<" "<<num2<<endl;



return 0;

}