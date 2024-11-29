#include<iostream>
using namespace std;
int main()
{
    
    int option;
    int current_balance = 10000;
    int deposited_amout;
    int withdrawl_amount;
    cout<<"Welcome To Our Bank ! Check the menue below :"<<endl;
    cout<<"1. Deposit"<<endl;
    cout<<"2. Withdraw"<<endl;
    cout<<"3. Check balance"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter Number of the operation to be performed :"<<endl;
    cin>>option;

   switch (option)
   {
   case 1:
   cout<<"Enter amount to deposit :"<<endl;
   cin>>deposited_amout;
   current_balance = current_balance + deposited_amout;
   cout<<"Your balance after Deposi is :"<< current_balance;
   break;

   case 2:
   cout<<"Enter amount to withdraw :";
   cin>>withdrawl_amount;
   if(withdrawl_amount > current_balance)
   {
    cout<<"Insufficiet Balance";
   }
   else
   {
    cout<<"Please collect your amount from Amount Tray !"<<endl;  //atm withdraws amount 
    current_balance = current_balance - withdrawl_amount;
    cout<<"Your Remaining Balance is :"<< current_balance;
   }
   break;

   case 3:
   cout<<"Your Current Balance is :"<<current_balance;
   break;


    case 4:
    break;

default:
cout<<"Enter Valid Operation !";

   
   }
return 0;
}