#include<iostream>
#include<stdio.h>
#include<new>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<windows.h>
#include"..\MyCodeLibrary\gotoxy.cpp"
using namespace std;
class alpha{
private:
  int len;
  char*a;
public:
  alpha(int);
  void GAs(void);   //Get AlphabetS
  void PRAs(void);  //Print Randomized AlphabetS
  ~alpha(){}
};
alpha::alpha(int x)
{
  len=x;
  a=new char[len-1];
}
void alpha::GAs()
{
  cout<<"Enter Alphabets :-\n";
  for(int i=0;i<len;i++){
    a[i]=getch();
    cout<<a[i]<<" ";
  }
}
void alpha::PRAs()
{
  srand(time(NULL));
  int temp,j=0;
  for(int i=0;i<len;i++){
    temp=rand()%len;
    system("color f0");
    system("cls");
    gotoxy(i,j);
    cout<<a[temp]<<endl;
    for(;;){
      if(getch()==a[temp]){
        cout<<"\n\n  CORRECT";
        break;
      }
      else{
        system("cls");
        system("color 4f");
        gotoxy(i,j);
        cout<<a[temp]<<endl;
        cout<<"\n\n    WRONG\n  TRY AGAIN";
      }
    }
  }
}
int main()
{
  cout<<"\tTYPING TRAINER\n";
  cout<<"\n1  Start Training\n   with default keys\n";
  cout<<"\n2  Train Custom Keys\n";
  cout<<"\n>>";
  switch(getch())
  {
  case '1':
    break;
  case '2':
    alpha b(10);
    b.GAs();
    for(;;){b.PRAs();}
    break;
  }
  return 0;
}
