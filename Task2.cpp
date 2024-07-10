//Task 2
//SIMPLE CALCULATOR
#include<iostream>
using namespace std;
int main(){
    double num1=0,num2=0;
    char op;
    long long resutl;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter operator(\'+\',\'-\',\'*\',\'/\'): ";
    cin>>op;
    cout<<"Result: ";
    if(op=='+')
    cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    else if(op=='-')
    cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
    else if(op=='*')
    cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
    else if(op=='/'){
        if(num2!=0)
        cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
        else cout<<"Error! Division by zero.";
    }
    
    else cout<<"Invalid operator.";
    return 0;
}