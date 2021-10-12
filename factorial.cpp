#include<iostream>
using namespace std;

int factof(int n)
{
	if(n==0)return 0;
	int f=1;
	for(int i=1;i<=n;i++){
		f*=i;
	}
	return f;
}

int main()
{
	cout<<factof(4);
}
