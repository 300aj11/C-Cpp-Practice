#include<iostream>
#include<conio.h>>
using namespace std;

void A()
{
	int c=getch();
	if(c==13){
		cout<<"ENTER";
	}
	else if(c==27){
		cout<<"ESC";
	}
	else if(c==32){
		cout<<"WHITE SPACE";
	}
	else if(c==8){
		cout<<"BACK SPACE";
	}
	else if(c==9){
		cout<<"TAB";
	}
	else{
		cout<<"NOTHING";
	}
}
void B(char c)
{
	cout<<"|"<<c<<"|";
}
void C()
{
	int c=getch();
	cout<<(char)c<<" - "<<c;
}
void D()
{
	for(int i=0;i<=255;i++){
		cout<<i<<" "<<(char)i;
	}
}
int main()
{
	A();
	//B(27);
	//C();
	//D();
}
