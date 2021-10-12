#include<iostream>
#include<conio.h>
#include<new>
using namespace std;
template<class a>
class myArray{
		a *p;
		int n;
	public:
		myArray(int x)
		{
			n=x;
			try{
				p=new a[n];
			}
			catch(bad_alloc){
				cout<<"Allocation Failure";
			}
			for(int i=0;i<=n;i++){
				p[i]=0;
			}
		}
		
		int size()
		{
			return (n+1);
		}
		
		void scan(){
			for(int i=0;i<=n;i++){
				cout<<"["<<i<<"]  ";cin>>p[i];
			}
		}
		
		void print()
		{
			for(int i=0;i<=n;i++){
				cout<<p[i]<<" ";
			}
		}
		
		int insert(int k,a item)
		{
			if((k<=n)&&(k>=0)){
				for(int j=n;j>=k;j--){
					p[j+1]=p[j];
				}
				p[k]=item;
				return 0;
			}
			else{
				return 1;
			}
		}
		
		a delet(int k)
		{
			a item=p[k];
			for(int j=k;j<=n;j++){
				p[j]=p[j+1];
			}
			p[n]=0;
			return item;
		}
		
		void sort()
		{
			a temp;
			for(int i=1;i<=n;i++){
				for(int j=0;j<=n-i;j++){
					if(p[j]>p[j+1]){
						temp=p[j];
						p[j]=p[j+1];
						p[j+1]=temp;
					}
				}
			}
		}
		
		int lsearch(a item)
		{
			for(int i=0;i<=n;i++){
				if(p[i]==item){
					return i;
				}
			}
			return (-1);
		}
		
		int bsearch(a item)
		{
			int beg=0,end=n,mid=(beg+end)/2;
			while((beg<=end)&&(p[mid]!=item)){
				if(item<p[mid])
					end=mid-1;
				else
					beg=mid+1;
				mid=(beg+end)/2;
			}
			if(p[mid]==item)
				return mid;
			else
				return (-1);
		}
		
		int reverse()
		{
			a temp;
			for(int i=0;i<=((int)n/2);i++){
				temp=p[i];
				p[i]=p[n-i];
				p[n-i]=temp;
			}
			return 0;
		}
};

int comp(char *a,char *b)
{
	for(int i=0;b[i]!='\0';i++){
		if(a[i]==b[i]){
			continue;
		}else{
			return 0;
		}
	}
	return 1;
}
int getcommand()
{
	char c,x[12];
	for(int i=0;;i++){
		c=getch();
		if(c==';'){
			x[i]='\0';
			cout<<c;
			break;
		}
		x[i]=c;
		cout<<c;
		
	}
	if(comp(x,"getall")||comp(x,"getarr")||comp(x,"scanall")||comp(x,"getarray"))
		return 1;
	else if(comp(x,"print")||comp(x,"show")||comp(x,"display")||comp(x,"cout"))
		return 2;
	else if(comp(x,"delete")||comp(x,"remove"))
		return 3;
	else if(comp(x,"sort")||comp(x,"bsort")||comp(x,"bubblesort"))
		return 4;
	else if(comp(x,"exit")||comp(x,"quit"))
		return 5;
	else if(comp(x,"insert")||comp(x,"get")||comp(x,"scan"))
		return 6;
	else if(comp(x,"lsearch")||comp(x,"linearsearch"))
		return 7;
	else if(comp(x,"bsearch")||comp(x,"binarysearch"))
		return 8;
	else if(comp(x,"reverse"))
		return 9;
	else
		return 0;
}

int main()
{
	int s;
	cout<<"Size of an Array : "; cin>>s;
	register myArray<int>a(s);
	for(;;){
		cout<<"\n>>> ";
		switch(getcommand()){
			case 1:
				cout<<"\n";
				a.scan();
				break;
			case 2:
				cout<<"\n";
				a.print();
				cout<<"\n";
				break;
			case 3:
				int i;
				cout<<"\nIndex : "; cin>>i;
				cout<<"Your data ["<<a.delet(i)<<"] from Index "<<i<<" has been Successfully Deleted\n";
				break;
			case 4:
				a.sort();
				cout<<"\nYour data has been successfully sorted\n";
				break;
			case 5:
				exit(0);
				break;
			case 6:
				int in,it;
				cout<<"\nIndex : "; cin>>in;
				cout<<"Item  : "; cin>>it;
				if(a.insert(in,it)==0)
					cout<<"Your Data has been successfully Inserted\n";
				else
					cout<<"Index is incorrect, Fail to insert element in array\n";
				break;
			case 7:
				int t;
				cout<<"\nItem : "; cin>>t;
				cout<<"Your Item is at index : "<<a.lsearch(t)<<"\n";
				break;
			case 8:
				int l;
				cout<<"\nItem : "; cin>>l;
				cout<<"Your Item is at index : "<<a.bsearch(l)<<"\n";
				break;
			case 9:
				a.reverse();
				cout<<"\nArray is successfully reversed\n";
				break;
			default:
				cout<<"\tYou command is not mean to me...";
		}
	}
	return 0;
}
