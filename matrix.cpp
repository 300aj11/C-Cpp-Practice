#include<iostream>
#include<conio.h>
using namespace std;
template<class x>
class matrix{
	int R,C;
	x *arr;
public:
  matrix(int,int);
  void in(void);
  void out(void);
  matrix &operator+(matrix);
  matrix operator-(matrix);
  matrix operator*(int);
  matrix operator*(matrix);
};
matrix::matrix(int a,int b)
{
  R=a,C=b;
  arr=new x[R][C];
}
