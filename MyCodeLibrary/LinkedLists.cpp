#include"Nodes.cpp"

/*-------------------Single Linked List || One-Way Linked List-------------------*/
template<class A>class sLinkedList{
	protected:
		sNode<A>* head;
		int s;
	public:
		sLinkedList();
		sLinkedList(sNode<A>*);
		
		int size();
		void updateSize();
		
		A &operator[](int n);			//Generate run time error, when the subscript(n) get out-of-range
		
		sNode<A>*search(A);
		//sNode<A>*ssearch(A);			//Run Time Error
		int push(A);
		int insert_after(sNode<A>*,A);
		int append(A);
		
		int deleteNode(A);
		int deleteNode(sNode<A>*);
		
		void display();
};
template<class A>sLinkedList<A>::sLinkedList()
{
	head=NULL;
	s=-1;
}
template<class A>sLinkedList<A>::sLinkedList(sNode<A>*np)
{
	head=np;
	s=0;
}
template<class A> int sLinkedList<A>::size()
{
	return s;
}
template<class A> void sLinkedList<A>::updateSize()
{
	sNode<A>*np=head;
	int i=-1;
	while(np!=NULL){
		++i;
		np=np->next;
	}
	s=i;
}
template<class A> A &sLinkedList<A>::operator[](int n)
{
	if(n>=0||n<s){
		sNode<A>*temp=head;
		for(int i=0;i<n;i++){
			temp=temp->next;
		}
		//if(temp==NULL)return NULL;
		return temp->info;
	}
}
template<class A>sNode<A>*sLinkedList<A>::search(A ITEM)
{
	sNode<A>*np=head;
	while(np!=NULL){
		if(ITEM==np->getInfo())
			return np;
		else
			np=np->next;
	}
	return NULL;
}
/*template<class A>sNode<A>*sLinkedList<A>::ssearch(A ITEM)		//Run Time Error
{
	sNode<A>*np=head;
	while(np!=NULL){
		if(ITEM==np->info)
			return np;
		else if(ITEM<*(np->info))
			np=np->next;
		else 
			return NULL;
	}
}*/
template<class A> int sLinkedList<A>::push(A ITEM)
{
	sNode<A>*ptr=new sNode<A>(ITEM);
	ptr->next=head;
	head=ptr;
	++s;
	return 1;
}
template<class A> int sLinkedList<A>::insert_after(sNode<A>*pn,A ITEM)
{
	if(pn==NULL){
		return 0;
	}
	sNode<A>*ptr=new sNode<A>(ITEM);
	ptr->setNext(pn->next);
	pn->setNext(ptr);
	++s;
	return 1;
}
template<class A> int sLinkedList<A>::append(A ITEM)
{
	sNode<A>*ptr=new sNode<A>(ITEM);
	ptr->setNext(NULL);
	sNode<A>*last=head;
	if(head==NULL){
		head=ptr;
		++s;
		return 1;
	}
	while(last->next!=NULL){
		last=last->next;
	}
	last->setNext(ptr);
	++s;
	return 1;
}
template<class A> int sLinkedList<A>::deleteNode(A ITEM)
{
	sNode<A>*temp=head,*prev=NULL;
	if(temp!=NULL&&temp->getInfo()==ITEM){
		head=temp->next;
		delete temp;
		--s;
		return 1;
	}
	while(temp!=NULL&&temp->getInfo()!=ITEM){
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL){
		return 0;
	}
	prev->next=temp->next;
	delete temp;
	--s;
	return 1;
}
template<class A> int sLinkedList<A>::deleteNode(sNode<A>*temp)
{
	if(temp==NULL){
		return 0;
	}
	if(head==temp){
		head=temp->next;
		delete temp;
		--s;
		return 1;
	}
	sNode<A>*prev=head;
	while(prev->next!=temp){
		prev=prev->next;
	}
	prev->next=temp->next;
	delete temp;
	--s;
	return 1;
}
template<class A> void sLinkedList<A>::display()
{
	sNode<A>*np=head;
	while(np!=NULL){
		cout<<np->getInfo();
		np=np->next;
	}
}


/*-------------------Double Linked List || Two-Way Linked List-------------------*/
template<class A>class dLinkedList{
	dNode<A>*head,*tail;
	int s;
public:
	dLinkedList();
	dLinkedList(dNode<A>*);
	int size();
	dNode<A>*search(A);
	int push(A);
	int insert_between(dNode<A>*,dNode<A>*,A);
	int append(A);
	int deleteNode(A);
	int deleteNode(dNode<A>*);
	void display();
};
template<class A>dLinkedList<A>::dLinkedList()
{
	head=NULL;
	tail=NULL;
	s=-1;
}
template<class A>dLinkedList<A>::dLinkedList(dNode<A>*np)
{
	head=np;
	tail=np;
	s=0;
}
template<class A> int dLinkedList<A>::size()
{
	return s;
}
template<class A>dNode<A>*dLinkedList<A>::search(A item)
{
	dNode<A>*np=head;
	while(np!=NULL){
		if(item==*(np->info))
			return np;
		else
			np=np->next;
	}
	return NULL;
}
template<class A> int dLinkedList<A>::push(A item)
{
	dNode<A>*np=new dNode<A>(item);
	if(head==NULL){
		head=np;
		tail=np;
		++s;
		return 1;
	}
	np->setNext(head);
	head=np;
	//np=np->next;		//hear we move np to the next node
	//np->prev=head;	//and assign it's prev pointer the address of new node which is store in head
	np->next->prev=np;	//hear we access the next node's prev pointer by writing np->next->prev and assign it the address of new pointer
	++s;
	return 1;
}
template<class A> int dLinkedList<A>::insert_between(dNode<A>*a,dNode<A>*b,A item)
{
	if(a==NULL&&b==NULL){
		return 0;
	}
	dNode<A>*np=new dNode<A>(item);
	np->setLink(b->prev,a->next);
	a->setNext(np);
	b->setPrev(np);
	++s;
	return 1;
}
template<class A> int dLinkedList<A>::append(A item)
{
	dNode<A>*np=new dNode<A>(item);
	if(tail==NULL){
		tail=np;
		head=np;
		++s;
		return 1;
	}
	np->setPrev(tail);
	tail=np;
	//np=np->next;
	//np->prev=head;
	np->prev->next=np;
	++s;
	return 1;
}
template<class A> int dLinkedList<A>::deleteNode(A item)
{
	if(deleteNode(search(item))){
		return 1;
	}
	return 0;
}
template<class A> int dLinkedList<A>::deleteNode(dNode<A>*N)
{
	if(N==NULL){
		return 0;
	}
	if(N->prev==NULL&&N->next==NULL){
		head=NULL;
		tail=NULL;
		delete N;
		--s;
		return 1;
	}
	if(N->next==NULL){
		tail=N->prev;
		N->prev->next=NULL;
		delete N;
		--s;
		return 1;
	}
	if(N->prev==NULL){
		head=N->next;
		N->next->prev=NULL;
		delete N;
		--s;
		return 1;
	}
	N->prev->next=N->next;
	N->next->prev=N->prev;
	delete N;
	--s;
	return 1;
}
template<class A> void dLinkedList<A>::display()
{
	dNode<A>*ptr=head;
	while(ptr!=NULL){
		cout<<ptr->getInfo();
		ptr=ptr->next;
	}
}
