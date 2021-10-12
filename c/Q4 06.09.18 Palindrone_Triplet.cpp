#include<iostream>
using namespace std;

int*triple(int a)
{
	int *t=new int[2];
	t[0]=a;
	t[1]=((a*a-1)/2);
	t[2]=((a*a+1)/2);
	return t;
}

int main()
{
	int *p,tt=0;
	for(int i=3;i<10;i++){
		p=triple(i);
		for(int j=0;j<3;j++){
			tt+=p[j];
			cout<<p[j]<<" ";
		}
		cout<<"= "<<tt<<"\n";
	}
	return 0;
}
