#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
  char c=219;
  int l,b;
  cout<<"Length <=39 : ";cin>>l;
  cout<<"Breath      : ";cin>>b;
  cout<<"\n";
  for(int i=0;i<l;i++){cout<<c<<c;}
  cout<<"\n";
  for(int i=0;i<b-2;i++){
    cout<<c<<c;
    for(int j=0;j<l-2;j++){cout<<"  ";}
    cout<<c<<c<<"\n";
  }
  for(int i=0;i<l;i++){cout<<c<<c;}
  return 0;
}
