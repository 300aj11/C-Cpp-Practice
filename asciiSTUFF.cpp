#include<iostream>
#include<stdio.h>
using namespace std;

void cTOascii()
{
  int num=getchar();
  cout<<num;
}

void asciiTOc()
{
  int num;
  cin>>num;
  cout<<(char)num;
}

void listOFascii()
{
  for(int i=1;i<255;i++){
    cout<<"("<<i<<") "<<(char)i<<"\n";
  }
}

int main()
{
  /*if(getchar()==10){
    cout<<"You Get it right";
  }else{cout<<"That's not right\n\n";}*/
  listOFascii();
}
