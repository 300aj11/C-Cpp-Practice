#include<iostream>
using namespace std;

int *pn,a=0;

int prime_generator(int n)
{
	int r;
	
	if(a>n)a=0;
	
	if(a>=1&&a<=n){
		r=pn[a];
		a++;
		return r;
	}
	else{
		pn=new int[n];
		int i=0,p=2,flag,count;
		while(i<n){
			flag=1;
			for(count=2;count<p;count++){
				if(p%count==0){
					flag=0;
					break;
				}
			}
			if(flag==1){
				pn[i]=p;
				i++;
			}
			p++;
		}
		r=pn[a];
		a++;
		return r;
	}
}

int main()
{
	int x;
	cout<<"Enter a Number : ";
	cin>>x;
	
	for(int i=0;i<=x;i++){
		cout<<prime_generator(x)<<"\n";
	}
}
