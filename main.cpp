#include<iostream>
#include<windows.h>
using namespace std;
//#include"MyCodeLibrary\AritExEval.cpp"
#include"MyCodeLibrary\menu.cpp"
int main()
{
	char *a[]={"fffcbbfv","fghgn","cgbhcfg"};
	menu z(3,16,a);
	z.show();
	//cout<<eval(convert("54*22*+32^3+/1-"));
	//"54*22*+32^3+/1-"
	return 0;
}
