#include"stack.cpp"

int num(char x)
{
	switch(x){
		case'0':return 0;
		case'1':return 1;
		case'2':return 2;
		case'3':return 3;
		case'4':return 4;
		case'5':return 5;
		case'6':return 6;
		case'7':return 7;
		case'8':return 8;
		case'9':return 9;
	}
}
int precedence(char x)
{
	switch(x){
		case'^':return 0;
		case'*':return 1;
		case'/':return 1;
		case'+':return 2;
		case'-':return 2;
	}
}
int e(int z,int y)
{
	int a=1;
	for(;y;y--){
		a*=z;
	}
	return a;
}

char*convert(char *q)
{
	LinkedSTK<char>s;
	char *p;
	
	
	return p;
}

int eval(char *p)
{
	LinkedSTK<int>s;
	int a,b;
	for(int i=0;p[i]!='\0';i++){
		if(p[i]>='0'&&p[i]<='9'){
			s.push(num(p[i]));
		}
		if(p[i]=='*'||p[i]=='+'||p[i]=='-'||p[i]=='/'||p[i]=='^'){
			a=s.pop();b=s.pop();
			switch(p[i]){
				case'*':s.push(b*a);break;
				case'+':s.push(b+a);break;
				case'-':s.push(b-a);break;
				case'/':s.push(b/a);break;
				case'^':s.push(e(b,a));break;
			}
		}
	}
	return s.pop();
}
