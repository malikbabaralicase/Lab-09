#include<iostream>
using namespace std;
int main()
{
    
    int num1 , num2;
    char opt;

    cout<<"Enter 1st Number :";
    cin>>num1;

    cout<<"Enter Operation to perform :";
    cin>>opt;

    cout<<"Enter 2nd Number :";
    cin>>num2;

    switch (opt)
    {
    case '+':
    cout<<"The Sum of Numbers is :"<< num1 + num2 ;
    break;

    case '-':
        cout<<"Subtracted answer is :"<<num1 - num2;
        break;
        
    case '*':
        cout<<"Product of numbers is :"<<num1 * num2;
        break;
    
    case '/':
        cout<<"PThe division of Numbers is :"<<num1 / num2;
        break;

    default:
        cout<<"Enter Valid Operator! ";
        break;
    }
return 0;
}