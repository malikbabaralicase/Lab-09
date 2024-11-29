#include<iostream>
using namespace std;
int main()
{
    
    char light_color;
    cout<<"Enter Color of the Signal(R for red , G for Green and Y for Yellow):";
    cin>>light_color;

   switch (light_color)
   {
   case 'R':
   case 'r':
   cout<<"Stop! ";
   break;

   case 'Y':
   case 'y':
   cout<<"Slow Down !";
   break;

   case 'G':
   case 'g':
   cout<<" Go ";
   break;

   
   default:
   cout<<"Enter valid Color !";
    break;
   }
return 0;
}