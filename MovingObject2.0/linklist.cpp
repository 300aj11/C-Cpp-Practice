class Node{
public:
	int Xpos,Ypos;
	Node *next;
	
	Node()
	{
		Xpos=0;
		Ypos=0;
		next=NULL;
	}
	Node(int x,int y)
	{
		Xpos=x;
		Ypos=y;
		next=NULL;
	}
};

class LinkedList{
	public:
		Node* head;
		int s;
		
		LinkedList()
		{
			head=NULL;
			s=0;
		}
		LinkedList(Node*np)
		{
			head=np;
			s=1;
		}
		
		int size()
		{
			return s;
		}
		
		int add(int x,int y)
		{
			Node *ptr=new Node(x,y);
			ptr->next=head;
			head=ptr;
			++s;
			return 1;
		}
		
		Node* del()
		{
			Node *temp=head, *prev=NULL;
			while(temp->next!=NULL){
				prev=temp;
				temp=temp->next;
			}
			prev->next=NULL;
			--s;
			return temp;
		}
		
		Node* move(int x,int y){
			add(x,y);
			return del();
		}
		
		void display(){
			char ch=219;
			Node *np=head;
			while(np!=NULL){
				cout<<ch<<ch;
				np=np->next;
			}
		}
};
