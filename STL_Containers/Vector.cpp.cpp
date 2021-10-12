#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<char> cv(5,'a');
	vector<char>::iterator p;
	for(p=cv.begin();p!=cv.end();p++){
		*(p+1)=toupper(*p+1);
	}
	cv.push_back('f');
	for(p=cv.begin();p!=cv.end();p++){
		cout<<*p<<" ";
	}
	cout<<cv.size();
	
}
