#include<iostream>

using namespace std;



// Pointer address value

/*int main(){



  int x=10;

  int y=20;

  

  int* ptr=&x;

  *ptr=67;

   y= *ptr;

  cout<<"value of x : "<<x<<endl;

  cout<<"value of ptr "<<*ptr<<endl;

  cout<<"value of y "<<y;

  

	

	

}*/

// constant integer

/*int main ()  

{  



	int x = 10, y = 20;  

	const int* ptr = &x; //10

  	ptr = &y; //20

  	cout << *ptr<< endl; //20

  	ptr=&x; //10

  	cout << ptr<< endl; //address of x

 

	cout << " The value of ptr: " << *ptr << endl;  //10



}   */



//constant int const pointer



/* int main ()  

{  



	int p = 10, q = 20;  

	const int* const ptr = &p; 

  //	ptr = &q; 

  	cout << *ptr<< endl; //10

  //	ptr=&p;

  	cout << ptr<< endl; //10

  //	*ptr = 15; 

	cout << " The value of ptr: " << *ptr << endl; //15 



}  */



//reference number

/*int main() 

{

	int no=10;

	int &refno=no;

	cout<<no<<"  "<<refno<<endl;// 10 10

	no=100;

	cout<<no<<"  "<<refno<<endl;//100 100 

	cout<<&no<<"  "<<&refno<<endl; // add add

	

} */



//swap by value

/*

//void swap1(int  , int);

int main(){

	int p,s;

	cout<<"insert values ";

	cin>>p>>s;

	cout<<"before swapping "<<p<<"  "<<s<<endl;

	swap(p,s);

	cout<<"After swapping "<<p<<"  "<<s<<endl;

	

}

/*void swap1(int a, int b)

{

	int temp;

	temp=a;

	a=b;

	b=temp;

}*/

//constant values do not accept nor set another value

/*

class Complex

{

	int real;

	int img;

	

	public:



	void accept();

	void setReal(int);

	int getImg()const;

	void show()const

	{

		cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;	

	}

	Complex(int r,int i)

	{

		real=r;

		img=i;

	}

};

void Complex::accept()

{

	cout<<"enter real and img\n";

	cin>>real>>img;

}

void Complex::setReal(int r )

{

	real=r;

}

int Complex::getImg()const

{

	return img;

}

int main()

{

	 const Complex d1(1,2);

	//d1.accept();//function calling

	d1.show();//1,2

	//d1.setReal(10);//setter function

	//d1.show();//10 2

	cout<<"imaginary part is "<<d1.getImg(); //2

	cout<<"size of object is "<<sizeof(d1); //8

	

}

*/

//static count & count increment

/*class complex

{

	int real,img;

	static int cnt;

	public:

	void accept();

	void setReal(int);

	int getImg();

	void show()

	{

		cout<<"complex numbers are : "<<real<<"+"<<img<<"i"<<"  cnt "<<cnt<<endl;

	     

	}

	static int getCnt(){

	cnt=10;

	return cnt;

	

	}

	

	

};

 int complex::cnt;



void complex :: accept(){

	cout<<"insert values : ";

	cin>>real>>img;

	cnt++;

}



void complex::setReal(int a){

	real=a;

	cnt++;

	

	

}



int complex::getImg()

{

	cnt++;

	return img;

	

}

int main()

{

	 complex d1;

	 d1.accept();

	 d1.show();

	 

	 d1.setReal(14);

	 d1.show();

	 d1.getImg();

	  d1.show();

	 cout<<"value is "<<d1.getCnt();

	 

}*/



/*class complex 

{

   int real,img;

   public:

   void show();

   complex();	

};



void complex::show()

{

	cout<<"the number is : "<<real<<" + "<<img<<"i"<<endl;

}



complex::complex()

{

	cout<<"insert the real no: ";

	cin>>real>>img;

	

}



int main(){

	complex d1;

	d1.complex();

	d1.show();

}*/


