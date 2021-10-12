class kft
{
private:
  int nok,tkp,wkp;
  char *keys;
  void getKeys();
  int getKeys(char s[]);
public:
  kft(int);
  kft(char a[]);
  void result();
  int twin();
  ~kft()
  {
  	delete[]keys;
  }
};

kft::kft(int x)
{
  nok=x;
  try{
  	keys=new char[nok-1];
  }
  catch(bad_alloc xa){
  	cout<<"Allocation Failure";
  }
  getKeys();
  tkp=0,wkp=0;
}

kft::kft(char a[])
{
	try{
		ifstream chfile;
		chfile.open(a);
		if(!chfile.is_open()){throw 1;}
		int i; char ch;
		while(chfile.get(ch)){i+=1;}
		nok=i;
		keys=new char[nok-1];
		chfile.close();
		getKeys(a);
	}
	catch(int e){
		switch(e){
			case 1:
				cout<<"ERROR #"<<e<<"\tCan't Open the file ["<<a<<"]";
				break;
			case 2:
				cout<<"ERROR #"<<e<<"\tCan't read the contant of the file ["<<a<<"]";
				break;
		}
	}
	catch(bad_alloc xa){
  		cout<<"Allocation Failure";
  	}
	tkp=0,wkp=0;
}

void kft::getKeys()
{
  cout<<"Enter Alphabets :-\n";
  for(int i=0;i<nok;i++){
    keys[i]=getch();
    cout<<i+1<<": "<<keys[i]<<"\n";
  }
}

int kft::getKeys(char s[])
{
	ifstream chfile;
	chfile.open(s);
	if(!chfile.is_open()){throw 2;}
	for(int j=0;!chfile.eof();j++){
		chfile.get(keys[j]);
	}
	chfile.close();
	return 0;
}

void kft::result()
{
	cout<<"\n\nTotal Key Press "<<tkp<<"\nWrong Key Press "<<wkp;
	getch();
}

int kft::twin()
{
	for(;;){
		int *rn=randnums(nok);
		for(int i=0;i<nok;i++){
			cout<<keys[rn[i]];
			++tkp;
			for(;;){
				char press=getch();
				if(press==keys[rn[i]]){
					break;
				}
				else{
					if(press=='0'){
						result();
						return 1;
					}
					else{
						++wkp;
					}
				}
			}
		}
	}
}
