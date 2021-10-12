#include<iostream>
#include<fstream>
using namespace std;
int countfch(char a[])
{
	char ch;
	int i;
	
	ifstream chfile;
	chfile.open(a);
	if(!chfile.is_open()){
		cout<<"ERROR : Fail to open the file";
		return -1;
	}
	while(chfile.get(ch)){
		i+=1;
	}
	chfile.close();
	return i;
}
int main()
{
	char s[]="ajm";
	cout<<countfch(s);
	return 0;
}
