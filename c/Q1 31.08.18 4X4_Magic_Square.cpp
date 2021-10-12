#include<iostream>
using namespace std;
int main()
{
	int sq[4][4],s;
	cout<<"Enter a number : ";
	cin>>s;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			sq[i][j]=s++;
		}
	}
	for(int i=0,j=3; i<2; i++,j--){
		swap(sq[i][i],sq[j][j]);
		swap(sq[i][j],sq[j][i]);
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<sq[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
