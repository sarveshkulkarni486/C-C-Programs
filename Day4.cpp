#include <iostream>

using namespace std;





/*int main()

{

	int len,i;

	char* ptr;

	

	cout<<"enter the length of the string L: ";

	cin>> len;

	ptr= new char(len);

	

	for(int i=0;i<len;i++){

		cin>>ptr[i];

	}

	cout<<ptr;

}*/



//userdfine destructor is used to destruct the dynamic memory from heap section

/*class demo

{

	int* ptr;

	public:

		demo(){

			ptr= new int;

			*ptr=10;

		}

		void display()

		{

			cout<<*ptr<<"\n";

		}

		

		~demo(){

			cout<<"this is destructor \n";

			delete ptr;

		}

};



int main()

{

	demo d1;

	d1.display();

	d1.~demo();

}*/



/*class string1

{

	int i,len;

	char* ptr;

	

	public:

		void chardisplay();

	    string1();

	    string1(char*);

	    void stringdisplay();

	    string1(char,int);

	    string1(int);

	    ~string1()

	    {

	    	delete ptr;

		}

};



void string1::chardisplay()

{

	cout<<"length"<<"  "<<len<<endl;

	cout<<"char"<<"  "<<*ptr<<endl;

}



string1::string1()

{

	 len=2;

	ptr =new char();

	*ptr='A';

}



string1::string1(int l  )

{

	len= l;

	ptr= new char(len+1);

	cout<<"enter the length\n";

	cin>>ptr;

}

string1::string1(char* sptr)

{

	

}



int main(){

	string1 a1;

	

	a1.chardisplay();

	

	string1 a2(10);

	a2.chardisplay();

}*/

//min max using dynamic memory allocation

/*class temp

{

	int size;

	int* ptr;

	

	public:

		temp();

		void get();

		void show();

		int max();

		int min();

};

temp::temp(){

	cout<<"enter the size : ";

	cin>>size;

	ptr=new int(size);

	

}

void temp::get()

{

	cout<<"enter the elements";

	for(int i=0;i<size;i++){

		cin>>ptr[i];

	}

}



void temp::show()

{

	for(int i=0;i<size;i++){

		cout<<ptr[i]<<" ";

	}

}



int temp::max()

{

	int m=ptr[0];

	for(int i=1;i<size;i++){

		if(ptr[i]>m){

			m=ptr[i];

		}

	}

		cout<< m;

}



int temp::min ()

{

	int m=ptr[0];

	for(int i=1;i<size;i++){

		if(ptr[i]<m){

		   m=ptr[i];

	    }

	}

	cout<< m;

}



int main(){

	temp a1;

	a1.get();

	a1.show();

	a1.max();

	a1.min();

}*/



//copy constructor



/*class demo 

{

	int p,s;

	public:

	demo(int p,int y){

		this->p=p;

		this->s=s;

	}

	void show(){

		cout<<"p"<<p<<"  "<<"s"<<s;

	}

};



int main(){

	demo a1(3,6);

	a1.show();

	demo a2(a1);

	a2.show();

}

*/



/*class temp 

{

	int x;

	public:

	void get();

	void show(){

		cout<<"x"<<x;

	}

};



void temp::get(){

	cout<<"enter value of x : ";

	cin>>x;

}



int main()

{

	temp a1;

	a1.get();

	a1.show();

	temp a2(a1);

	a2.show();

}*/
#include<string.h>

class copyct

{

	int len;

	char *ptr;

	

    public:

	copyct(char*);

	void stringdisplay();

	~copyct();

	

};

void copyct::stringdisplay()

{

	cout<<"length is "<<len<<endl;

	cout<<"string is "<<ptr<<endl;

}

copyct::copyct(char * sptr)

{

	len=strlen(sptr);

	ptr=new char[len+1];

	strcpy(ptr,sptr);

}

copyct::~copyct()

{

	cout<<"destructor \n";

	if(ptr)

	delete [] ptr;

	ptr=NULL;

}



int main()

{	

	copyct c2("rakesh");

	c2.stringdisplay();

	

	copyct c3(c2);

	c3.stringdisplay();



	c2.stringdisplay();



}
