#include<iostream>
using namespace std;

int*row(int i)
{
	int *p=new int[i];
	
	return p;
}

int main()
{
	int n;
	cin>>n;
	int *triangle[n];
	for(int i=0;i<=n;i++){
		triangle[i]=row(i);
	}
	/*for(int i=0;i<=n;i++){
		triangle[i]=new int[i];
	}
	for(int i=0;i<=n;i++){
		triangle[i][0]=1;
		triangle[i][i]=1;
		for(int j=1;j<i;j++){
			triangle[i][j]=0;
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout<<triangle[i][j]<<"  ";
		}
		cout<<"\n";
	}*/
	return 0;
}
