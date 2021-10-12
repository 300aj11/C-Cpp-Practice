#include"n.cpp"
template<class a>
class linkqueue{
	Node<a>* FRONT;
	Node<a>* REAR;
public:
	linkqueue();
	bool QINSERT(a);
	a QDELETE();
	void show();
};
template<class a>linkqueue<a>::linkqueue()
{
	FRONT=NULL;
	REAR=NULL;
}
template<class a> bool linkqueue<a>::QINSERT(a item)
{
	Node<a>*np=new Node<a>(item);
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
template<class a> a linkqueue<a>::QDELETE()
{
	if(FRONT==NULL){
		cout<<"UNDERFLOW";
		return NULL;
	}
	Node<a>*temp=FRONT;
	a item=temp->getData();
	FRONT=temp->next;
	delete temp;
	return item;
}
template<class a> void linkqueue<a>::show()
{
	Node<a>*np=FRONT;
	while(np!=NULL){
		cout<<np->getData();
		np=np->next;
	}
}
