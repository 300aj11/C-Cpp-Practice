#include<stdio.h>
#include<conio.h>
int getSecretly(char*x,char cos)
{
	char c; int i;
	for(i=0;;i++){
		c=getch();
		if(c=='0'){
			x[i]='\0';
			break;
		}
		x[i]=c;
		printf("%c",cos);
	}
	return 1;
}

int main()
{
 char pw[16];
 printf("Password : ");
 getSecretly(pw,'*');
 printf("\n\nYour PASSWORD is: %s",pw);
 return 0;
}
