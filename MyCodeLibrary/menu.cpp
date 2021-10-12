#include"gotoxy.cpp"
class menu{
	int nitem;
	char cursor;
	char*list[];
public:
	menu(int,char,char*[]);
	int show();
};
menu::menu(int n,char c,char*b[])
{
	nitem=n;
	cursor=c;
	*list=*b;
}
int menu::show()
{
	for(int i=1;i<=nitem;i++){
		gotoxy(3,i-1);
		cout<<list[i];
	}
	gotoxy(0,1);
	putchar(cursor);
}
