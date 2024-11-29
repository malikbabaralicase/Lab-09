#include<iostream>
using namespace std;
int main()
{
    
    char alphabet;
    cout<<"Enter any Alphabet :";
    cin>>alphabet;

   switch (alphabet)
   {
   case 'a':
   case 'A':
   cout<<"A is a Vowel !";
   break;

   case 'e':
   case 'E':
   cout<<"E is a Vowel !";
   break;

   case 'i':
   case 'I':
   cout<<"I is a Vowel !";
   break;

   case 'o':
   case 'O':
   cout<<"O is a Vowel !";
   break;
   
   case 'u':
   case 'U':
   cout<<"U is a Vowel !";
    break;
   
   default:
   cout<<"Entered Alphabet is not a Vowel !";
    break;
   }
return 0;
}