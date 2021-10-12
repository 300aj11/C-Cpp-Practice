//written by AJmal on 17/12/2017
//this function get the string by hiding it's actual characters on the output screen.
//it can be use for password entering
//argument requires :-
//1. char*x - one dimensional array to store the characters input by the user
//2. char cos - character which shows instead of the real characters

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
	return 0;
}
