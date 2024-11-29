#include<iostream>
using namespace std;
int main()
{
    
    char grade;
    cout<<"Enter Grade:";
    cin>>grade;

   switch (grade)
   {
   case 'a':
   case 'A':
   cout<<"Excellent !";
   break;

   case 'b':
   case 'B':
   cout<<"Good !";
   break;

   case 'c':
   case 'C':
   cout<<"Satisfactory !";
   break;

   case 'd':
   case 'D':
   cout<<"Need Improvement !";
   break;

   case 'f':
   case 'F':
   cout<<"Fail !";
   break;

   default:
   cout<<"Enter Valid Grade Whether A,B.C.D,F";
   break;
   }
return 0;
}