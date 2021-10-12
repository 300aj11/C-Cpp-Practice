int *randnums(const int a)
{
	int*temp=new int[a-1];
	srand(time(NULL));
	for(int i=0;i<a;i++){
		temp[i]=rand()%a;
	}
	return temp;
}
