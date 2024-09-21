//this is code of basic calculator to multiple operation(+,-,/,*)

#include<iostream>
using namespace std;
int main(){
    double num1,num2;
    char operation;
    cout<<"enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;
    cout<<"enter the operation(+,-,*,/): ";
    cin>>operation;
    switch(operation){
        case '+':
        cout<<"Addtion: "<<num1+num2<<endl;
        break;
        case '-':
        cout<<"Subtraction: "<<num1-num2<<endl;
        break;
        case '*':
        cout<<"multiplication: "<<num1*num2<<endl;
        break;
        case '/':
       
        if(num2 !=0){
            cout<<"division "<<num1/num2<<endl;
        }
        else{
            cout<<"error "<<endl;
        }
        break;
        default:
        cout<<"invalid operation "<<endl;
        break;
    }
    return 0;
}