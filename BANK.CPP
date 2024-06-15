#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<Bank1.cpp>
#include<fstream.h>


void main()
{Bank a[100];
 int res,q,p,i,x;
 clrscr();
 fstream iof;

 iof.open("Detail.bin",ios::out|ios::in|ios::app);


 cout<<"\n\n\n\n\n\n";


 cout<<"\t\t       ************* WELDCOME **************\n"
     <<"\t\t       *    TO ANDREW'S BANK Of INDIA      *\n"
     <<"\t\t       *************************************\n";
 getch();


 clrscr();


 cout<<"\n\n\n\n\n\n";

 cout<<"\t\t****************INSTRUCTION*****************"<<endl
     <<"\t\t*  Balance Should be more than Rs.500      *"<<endl
     <<"\t\t* You can only withdraw 5 times in a Month *"<<endl
     <<"\t\t********************************************";


 cout<<"\n\n\nPress any key To Continue";
 getch();

 clrscr();

 cout<<"How Many Account do you have : ";
 cin>>x;

 for(i=0;i<x;i++)
 {
  a[i].creat();
  iof.write((char*) &a[i], sizeof(a[i]));
  }

do { clrscr();

 cout<<"\n\n\n\n";

 cout<<"\t\t**************FUNCTION OF BANK******************"<<endl
     <<"\t\t* <Press 1> To Creat an Account                *"<<endl
     <<"\t\t* <Press 2> To Display an Account              *"<<endl
     <<"\t\t* <Press 3> To Withdraw Money from Account     *"<<endl
     <<"\t\t* <Press 4> To Deposit Money into your account *"<<endl
     <<"\t\t* <Press 5> To Take loan                       *"<<endl
     <<"\t\t************************************************\n"<<endl;

 cin>>res;


 switch(res)
 {
 case 1 : x=x+1;
	  a[x].creat();
	  iof.write((char*)&a[x], sizeof (a[x]));
	  break;

 case 2 : clrscr();
	  cout<<"Enter Your Account No. : ";
	  cin>>q;
	  for(i=0;i<x;i++)
	  { iof.seekg(0);
	    iof.read((char*)&a[i], sizeof(a[i]));
	    if(a[i].id==q) {a[i].show(); break;}
	    else {cout<<"Invalid ID !!!!!!";}
	  }
	  break;

 case 3 : cout<<"Enter Your Account No. : ";
	  cin>>q;
	  for(i=0;i<x;i++)
	  {if(a[i].id==q) { a[i].withdraw(); a[i].show(); break;}
	    else { cout<<"Invalid ID !!!!!!";} }
	  break;

 case 4 : clrscr();
	  cout<<"Enter Your Account No. : ";
	  cin>>q;
	  for(i=0;i<x;i++)
	  {if(a[i].id==q) { a[i].deposit();  a[i].show(); break;}
	    else {cout<<"Invalid ID !!!!!!";} }
	  break;

 case 5 : clrscr();
	  cout<<"Enter Your Account No. : ";
	  cin>>q;
	  for(i=0;i<x;i++)
	  {if(a[i].id==q) { a[i].loan();  a[i].show(); break;}
	    else {cout<<"Invalid ID !!!!!!";} }
	  break;

 // default : cout<<"Invalid Selection !!!!!!! ";
  }

 cout<<"\n\n<Press 0> To Continue ";
 cin>>p;

 }while(p==0);

 clrscr();
 cout<<"\n\n\n\n\n";

 cout<<"\t\t\t****************************"<<endl
     <<"\t\t\t*                          *"<<endl
     <<"\t\t\t*  THANK YOU FOR VISITING  *"<<endl
     <<"\t\t\t*                          *"<<endl
     <<"\t\t\t****************************"<<endl;

iof.close();
getch();


}