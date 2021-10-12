#include<iostream>
#include<conio.h>
#include<new>
using namespace std;

template<class a>class stk{
	int TOP,MAXSTK;
	a *S;
public:
	stk(int x);
	bool PUSH(a ITEM);
	a POP();
	bool isEmpty();
	void show();

	~stk()
	{
		delete []S;
	}
};

template<class a>stk<a>::stk(int x)
{
	MAXSTK=x;
	TOP=-1;
	try{
		S=new a[MAXSTK];
	}
	catch(bad_alloc){
		cout<<"Allocation Failure\n";
	}
}
template<class a>bool stk<a>::PUSH(a ITEM)
{
	if(TOP==MAXSTK){
      cout<<"OVERFLOW";
      return false;
    }
    ++TOP;
    S[TOP]=ITEM;
    return true;
}
template<class a>a stk<a>::POP()
{
	if(TOP==-1){
      cout<<"UNDERFLOW";
      return -1;
    }
    a ITEM=S[TOP];
    S[TOP]=0;
    --TOP;
    return ITEM;
}
template<class a>bool stk<a>::isEmpty()
{
	return (TOP<0);
}
template<class a>void stk<a>::show()
{
	for(int i=0;i<=TOP;i++){
      cout<<S[i]<<" ";
    }
}

void menu()
{
	cout<<"\n\t__________________________\n";
	cout<<"\t|         \t         |\n";
	cout<<"\t|  1. PUSH\t0. EXIT  |\n";
	cout<<"\t|  2. POP \t         |\n";
	cout<<"\t|________________________|\n";
}

int main()
{
	int n;
	char item;
	menu();
	cout<<"\nDeclare a STACK of SIZE : ";
	cin>>n;
	stk<char>a(n);
	for(;;){
		system("cls");
		menu();
		cout<<"\n\tStack : ";
		a.show();
		cout<<"\n\n>> ";
		switch(getch()){
			
			case '0':
				exit(0);
				
			case '1':
				system("cls");
				menu();
				cout<<"\n\tStack : ";a.show();
				cout<<"\n\nPUSH >> ";cin>>item;
				a.PUSH(item);
				cout<<"\n\nPress any key to continue...";
				getch();
				break;
				
			case '2':
				system("cls");
				menu();
				cout<<"\n\tStack : ";a.show();
				cout<<"\n\nPOP "<<a.POP();
				cout<<"\n\nPress any key to continue...";
				getch();
				break;
		}
	}
	return 0;
}
