template<class a>
class Que{
	int FRONT,REAR,N;
	a *Q;
public:
	Que(int x);
	bool ins(a);
	a del();
	void display();

	~Que()
	{
		delete []Q;
	}
};
template<class a>Que<a>::Que(int x)
{
	N=x;
	FRONT=-1;
	REAR=-1;
	try{
		Q=new a[N];
	}
	catch(bad_alloc){
		cout<<"Allocation Failure\n";
	}
	for(int i=0;i<=N;i++){
		Q[i]=NULL;
	}
}
template<class a>bool Que<a>::ins(a ITEM)
{
	if((FRONT==0&&REAR==N)||(FRONT==REAR+1)){
		return false;
	}
	if(FRONT==-1){
		FRONT=0;
		REAR=0;
	}
	else if(REAR==N){
		REAR=0;
	}
	else{
		REAR=REAR+1;
	}
	Q[REAR]=ITEM;
	return true;
}
template<class a>a Que<a>::del()
{
	if(FRONT==-1){
		return -1;
	}
	a item=Q[FRONT];
	Q[FRONT]=NULL;
	if(FRONT==REAR){
		FRONT=-1;
		REAR=-1;
	}
	else if(FRONT==N){
		FRONT=0;
	}
	else{
		FRONT=FRONT+1;
	}
	return item;
}
template<class a>void Que<a>::display()
{
	/*int i=FRONT;
	do{
		cout<<Q[i]<<" ";
		if(i==N){
			i=0;
		}
		++i;
    }while(i!=REAR);*/
    for(int i=0;i<=N;i++){
    	cout<<Q[i]<<" ";
	}
}


#include"Nodes.cpp"
template<class a>class LinkedQue{
	sNode<a>*FRONT,*REAR;
public:
	LinkedQue();
	bool ins(a);
	a del();
	void display();
};
template<class a>LinkedQue<a>::LinkedQue()
{
	FRONT=NULL;
	REAR=NULL;
}
template<class a> bool LinkedQue<a>::ins(a item)
{
	sNode<a>*np=new sNode<a>(item);
	np->next=NULL;
	if(REAR==NULL){
		REAR=np;
		FRONT=np;
		return true;
	}
	REAR->next=np;
	REAR=np;
	return true;
}
template<class a> a LinkedQue<a>::del()
{
	if(FRONT==NULL){
		return NULL;
	}
	sNode<a>*temp=FRONT;
	a item=temp->getInfo();
	FRONT=temp->next;
	delete temp;
	return item;
}
template<class a> void LinkedQue<a>::display()
{
	sNode<a>*np=FRONT;
	while(np!=NULL){
		cout<<np->getInfo();
		np=np->next;
	}
}
