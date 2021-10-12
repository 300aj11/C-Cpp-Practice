/*------------------------STACK Implemented by Array------------------------*/
template<class A>class STK{
	int top,maxstk;
	A *S;
public:
	STK(int x);
	
	bool push(A ITEM);
	A peek();
	A pop();
	int size();
	bool isEmpty();
	void display();

	~STK()
	{
		delete []S;
	}
};

template<class A>STK<A>::STK(int x)
{
	maxstk=x;
	top=-1;
	try{
		S=new A[maxstk];
	}
	catch(bad_alloc){
		cout<<"Allocation Failure\n";
	}
}
template<class A>bool STK<A>::push(A ITEM)
{
	if(top==maxstk){
      return false;
    }
    ++top;
    S[top]=ITEM;
    return true;
}
template<class A>A STK<A>::peek()
{
	if(top==-1){
      return -1;
    }
    return S[top];
}
template<class A>A STK<A>::pop()
{
	if(top==-1){
      return -1;
    }
    A ITEM=S[top];
    S[top]=0;
    --top;
    return ITEM;
}
template<class A>int STK<A>::size()
{
	return top;
}
template<class A>bool STK<A>::isEmpty()
{
	return (top<0);
}
template<class A>void STK<A>::display()
{
	for(int i=0;i<=top;i++){
      cout<<S[i]<<" ";
    }
}


/*---------------------STACK Implemented by Linked List---------------------*/
#include"Nodes.cpp"
template<class A>class LinkedSTK{
		sNode<A>* top;
		int s;
	public:
		LinkedSTK();
		bool push(A);
		A peek();
		A pop();
		int size();
		bool isEmpty();
		void display();
};

template<class A>LinkedSTK<A>::LinkedSTK()
{
	top=NULL;
	s=-1;
}
template<class A> bool LinkedSTK<A>::push(A ITEM)
{
	sNode<A>*ptr=new sNode<A>(ITEM);
	ptr->next=top;
	top=ptr;
	s++;
	return true;
}
template<class A> A LinkedSTK<A>::peek()
{
	if(top==NULL){
		return NULL;
	}
	return top->info;
}
template<class A> A LinkedSTK<A>::pop()
{
	if(top==NULL){
		return NULL;
	}
	sNode<A>*temp=top;
	A item=temp->info;
	top=temp->next;
	delete temp;
	s--;
	return item;
}
template<class A> int LinkedSTK<A>::size()
{
	return s;
}
template<class A> bool LinkedSTK<A>::isEmpty()
{
	return(top==NULL);
}
template<class A> void LinkedSTK<A>::display()
{
	sNode<A>*np=top;
	while(np!=NULL){
		cout<<np->info;
		np=np->next;
	}
}
