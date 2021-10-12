// header file stdlib.h and time.h is needed 
int *randnums(const int a)		//generate and return array of size a-1,
{								//containing random numbers from 0 to a with respect to time
	int*temp=new int[a-1];
	srand(time(NULL));
	for(int i=0;i<a;i++){
		temp[i]=rand()%a;
	}
	return temp;
}
int randnum(const int a)		//generate random number from 0 to a with respect to time.
{
	srand(time(NULL));
	return (rand()%a);
}
