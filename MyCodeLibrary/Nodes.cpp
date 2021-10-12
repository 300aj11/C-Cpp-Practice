/*-------------------Single Link Node--------------------*/
template<class T>class sNode{
public:
	T info;
	sNode<T> *next;
	
	sNode();
	sNode(T item);
	
	void setInfo(T);
	T getInfo();
	void setNext(sNode*);
};
template<class T>sNode<T>::sNode()
{
	info=NULL;
	next=NULL;
}
template<class T>sNode<T>::sNode(T item)
{
	info=item;
	next=NULL;
}
template<class T>inline void sNode<T>::setInfo(T item)
{
	info=item;
}
template<class T>inline T sNode<T>::getInfo()
{
	return info;
}
template<class T>inline void sNode<T>::setNext(sNode *np)
{
	next=np;
}

/*-------------------Double Link Node--------------------*/
template<class T>class dNode{
public:
	T info;
	dNode<T>*next,*prev;	
	
	dNode();
	dNode(T);
	
	void setInfo(T);
	T getInfo();
	void setLink(dNode*,dNode*);
	void setPrev(dNode*);
	void setNext(dNode*);
};
template<class T>dNode<T>::dNode()
{
	prev=NULL;
}
template<class T>dNode<T>::dNode(T item)
{
	info=item;
	next=NULL;
	prev=NULL;
}
template<class T>inline void dNode<T>::setInfo(T item)
{
	info=item;
}
template<class T>inline T dNode<T>::getInfo()
{
	return info;
}
template<class T>inline void dNode<T>::setLink(dNode*P,dNode*N)
{
	prev=P;
	next=N;
}
template<class T>inline void dNode<T>::setPrev(dNode*P)
{
	prev=P;
}
template<class T>inline void dNode<T>::setNext(dNode *np)
{
	next=np;
}

