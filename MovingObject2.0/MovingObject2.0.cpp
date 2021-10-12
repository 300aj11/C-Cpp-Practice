#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;


COORD coord={0,0};      //define gotoxy(), because it's ! present in code::block
void gotoxy(int x,int y)
{
  coord.X=x;
  coord.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

#include "linklist.cpp"

class MO{
private:
  LinkedList body;
  Node*prev;
  int Xpos,Ypos,prevXpos,prevYpos;
  void Set();
public:
  MO(int,int);
  void MoveDown();
  void MoveUp();
  void MoveRight();
  void MoveLeft();
};
MO::MO(int x=0,int y=0)
{
	body.add(0,0);
	Xpos=x,Ypos=y;
	Set();
}
void MO::Set()
{
  body.display();
  
  Node *z=body.move(Xpos,Ypos);
  
  gotoxy(z->Xpos,z->Ypos);
  cout<<"  ";
  
  /*gotoxy(Xpos,Ypos);
  cout<<ch<<ch;
  prevXpos=Xpos;
  prevYpos=Ypos;*/
}
void MO::MoveDown()
{
  if(Ypos<60){
  	Ypos+=1;
	Set();
  }
  
}
void MO::MoveUp()
{
  if(Ypos>0){
  	Ypos-=1;
    Set();
  }
}
void MO::MoveRight()
{
  if(Xpos<78){
  	Xpos+=1;
  	Set();
  }
}
void MO::MoveLeft()
{
  if(Xpos>0){
  	Xpos-=1;
  	Set();
  }
}

int main()
{
  MO a;
  for(;;){
    switch(getch()){
    case 's':
      a.MoveDown();
      break;
    case 'd':
      a.MoveRight();
      break;
    case 'w':
      a.MoveUp();
      break;
    case 'a':
      a.MoveLeft();
      break;
    case 'e':
      exit(0);
    default:
      continue;
    }
  }
  return 0;
}
