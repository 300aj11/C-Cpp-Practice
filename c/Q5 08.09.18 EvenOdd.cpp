#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	
	char *ans[]={"Even","Odd"};
	cout<<ans[n%2];
	
	/*switch(n%2){
		case 0:
			cout<<"Even";
			break;
		case 1:
			cout<<"Odd";
			break;
	}*/
	
	//(n%2)&&cout<<"ODD"||cout<<"Even";
	return 0;
}
