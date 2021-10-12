#include<iostream>
#include<fstream>
#include<new>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
using namespace std;
#include"include/randnums.cpp"
#include"include/class_kft.cpp"

int main()
{
	int n;
	kft *p;
	for(;;){
	  menu:
	  	system("cls");
		cout<<"\tP Particular Keys\n";
		cout<<"\tA All Keys\n";
		cout<<"\tC Capital Alphabets\n";
		cout<<"\tS Small Alphabets\n";
		cout<<"\tD Digits\n";
		cout<<"\tM Symbols\n";
		cout<<"\tE Exit\n";
	
	  switch(tolower(getch())){
	  	case 'p':
	  		system("cls");
	  		cout<<"No. of keys : ";cin>>n;
	  		p=new kft(n);
	  		cout<<"\n\n";
	  		p->twin();
			goto menu;
			break;
			
	  		
	  	case 'a':
	  		p=new kft("filescontainingkeys/CA_SA_D_S");
	  		system("cls");
	  		cout<<" 0 EXIT\n\n";
			p->twin();
			goto menu;
	  		break;
	  		
	  	case 'c':
	  		p=new kft("filescontainingkeys/CA");
	  		system("cls");
	  		cout<<" 0 EXIT\n\n";
	  		p->twin();
	  		goto menu;
	  		break;
	  	case 's':
	  		p=new kft("filescontainingkeys/SA");
	  		system("cls");
			cout<<" 0 EXIT\n\n";
			p->twin();
			goto menu;
	  		break;
	  	case 'd':
	  		p=new kft("filescontainingkeys/D");
	  		system("cls");
	  		cout<<" 0 EXIT\n\n";
			p->twin();
			goto menu;
	  		break;
	  	case 'm':
	  		p=new kft("filescontainingkeys/S");
	  		system("cls");
	  		cout<<" 0 EXIT\n\n";
	  		p->twin();
	  		goto menu;
	  		break;
	  	case 'e':
	  		exit(0);
	  		
	  	default:
			cout<<"\n\n Wrong Choice";
			break;
	  }
	}
  return 0;
}
