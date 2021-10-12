#include<iostream>
using namespace std;
string customCaesarCiper(int key, string message)
{
	for(int i=0;i<=message.length();i++){
		if(message[i]=='-'||message[i]==' ')continue;
		else message[i]=char(int(message[i])+key);
	}
	return message;
}

int main()
{
	int n=7;
	char msg[100];
	cout<<"Enter the key : ";
	cin>>n;
	if(n>0){
		cout<<"Enter the text : ";
		gets(msg);
		cout<<"Encrypter Text : "<<customCaesarCiper(n,msg);
	}else{
		cout<<"Invalid Input";
	}	
	return 0;
}
