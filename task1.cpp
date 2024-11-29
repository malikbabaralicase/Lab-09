#include<iostream>
using namespace std;
int main()
{
    
    char grade;
    cout<<"Enter Your Grade :";
    cin>>grade;

    switch (grade)
    {
    case 'A':
    case 'a':
        cout<<"Your Grade is A";
        break;

    case 'B':
    case 'b':
        cout<<"Your Grade is B";
        break;
        
    case 'C':
    case 'c':
        cout<<"Your Grade is C";
        break;
    
    default:
        cout<<"Your grade is other then A,B,C ";
        break;
    }
return 0;
}