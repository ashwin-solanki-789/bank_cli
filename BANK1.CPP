#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>

class Bank
{private:
 float bal;
 char name[100],type[50];
 public:
 int id;
 void creat();
 void show();
 void deposit();
 void withdraw();
 void loan();
};

void Bank::creat()
{
 clrscr();
 cout<<"Enter Id No. : "; cin>>id;
 cout<<"Enter Name of Account Holder : ";
 gets(name);
 cout<<"Enter the Account type : ";
 gets(type);
 cout<<"Enter Balance Amount : "; cin>>bal;
}

void Bank::show()
{clrscr();

 cout<<"\n\n Account Id \t Name of Holder \t Account Type \t Balance Amount ";
 cout<<"\n--------------------------------------------------------------------------------\n";
 cout<<"  "<<id<<"\t\t"<<name<<"\t\t"<<type<<"\t\t"<<bal;
}

void Bank::deposit()
{
 clrscr();
 float amt;

 cout<<"How Much Amount You Want To Deposit : ";
 cin>>amt;

 bal=bal+amt;

}

void Bank::withdraw()
{clrscr();
 float amt;

 cout<<"How Much Amount You Want To Withdraw : ";
 cin>>amt;

 if((bal-amt)>500 ) {bal=bal-amt;}
  else cout<<"Insufficient Balance !!!!!! ";

 cout<<"\n\nPress Enter Button to show your Balance in account ";

getch();

}

void Bank::loan()
{clrscr();
 long float amt; float r,si,n;

 cout<<"\n\n\n\n";

 cout<<"\t\t********************Rate of Interest*********************"<<endl
     <<"\t\t*   Loan Between Rs.10,000 - Rs.1,00,000 Rate is 7.5%   *"<<endl
     <<"\t\t* Loan Between Rs.1,00,001 - Rs.1,00,00,000 Rate is 10% *"<<endl
     <<"\t\t*   Loan is more than Rs.1,00,00,001 Rate is 12.5%      *"<<endl
     <<"\t\t*********************************************************"<<endl;

 cout<<"How Much Loan You Want? ";
 cin>>amt;
 cout<<"\n How Many Period Of Time :";
 cin>>n;

 if(amt<=100000) {si=(amt*n*7.5)/100;}
  else if( (amt>100000)&&(amt<=1000000) ) {si=(amt*n*10)/100;}
   else if(amt>10000000) {si=(amt*n*12.5)/100;}

  cout<<"The Amount Of Interest is : "<<si;

  bal=bal+amt;
  cout<<"\n\nThe Amount has been credited into your account"<<endl
      <<"\nPress Enter Button to show your Balance Amount "<<endl;

 getch();
}
