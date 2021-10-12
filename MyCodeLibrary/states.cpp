#include<iostream>
using namespace std;

double mean(int n,const double x[])
{
	double m=0;
	for(int i=0;i<n;i++){
		m+=x[i];
	}
	m/=n;
	return m;
}
double median(int n,const double x[]){
	if(n%2==0){
		return (x[n/2-1]+x[n/2])/2;
	}else{
		return x[n/2];
	}
}
int main()
{
	int n=7;
	double s[]={1,2,3,4,5,6,7};
	cout<<"x = {"; for(int i=0;i<n;i++){cout<<" "<<s[i]<<" ";}cout<<"}\n";
	cout<<"n = "<<n<<"\n";
	cout<<"MEAN : "<<mean(n,s);
	cout<<"\nMEDIAN : "<<median(n,s);
	return 0;
}
