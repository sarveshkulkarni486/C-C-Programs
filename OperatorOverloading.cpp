//Operator overloading of arithmetic and uniary operator +, - and - uniary
#include<iostream>
using namespace std;
/*
class Complex {
	int real, img;
	public:
		Complex();
		Complex(int, int);
		Complex operator+(Complex& );
		Complex operator-(Complex& );
		Complex operator-();
		void display(){
			if(img>0){
				cout<<"Complex number is : "<<real<<"+"<<img<<"i"<<endl;
			} else {
				cout<<"Complex number is: "<<real<<img<<"i"<<endl;
			}
		}
};

Complex::Complex() {
	real=0, img=0;
}
Complex::Complex(int r, int i){
	real = r;
	img = i;
}
Complex Complex::operator+(Complex& c1) {
	Complex temp;
	temp.real=this->real+c1.real;
	temp.img=this->img+c1.img;
	return temp;
}
Complex Complex::operator-(Complex& c2) {
	Complex temp;
	temp.real = this->real-c2.real;
	temp.img = this->img-c2.img;
	return temp;
} 
Complex Complex::operator-() {
	Complex temp;
	temp.real = this->real;
	temp.img = this->img;
	return temp;
}
int main() {
	Complex c3(2, 4);
	Complex c4(5, 3);
	Complex c5 = c3+c4;
	c5.display();
	Complex c6 = c4-c3;
	c6.display();
	Complex c7 = -c4;
	c7.display();
}

*/

//Operator overloading of post increment and pre increment and post and pre decrement operator
/*
class complex
{
	int real,img;
public:
	complex(int,int);
	void display();
	
	complex operator++();
	complex operator++(int);
	complex operator--();
	complex operator--(int); 
	complex();
};
complex::complex()
{
	real=img=0;
}
complex::complex(int real,int img)
{
	this->real=real;
	this->img=img;
}
void complex::display()
{
	if(img>0)
	cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<img<<"i"<<endl;
}

complex complex::operator++()//pre
{
	++this->real;//this->real=this->real + 1
	++this->img;
	return (*this);
}
complex complex::operator++(int)//post
{
	complex temp= (*this);
	++this->real;
	++this->img;
	return temp;
}
complex complex::operator--() {
	--this->real;
	--this->img;
	return (*this);
}
complex complex::operator--(int) {
	complex temp = (*this);
	--this->real;
	--this->img;
	return temp;
}
int main()
{
	int a=10;
	int b;
	b=++a; //a=11 b=11
	complex c1(1,2);
	complex c2=++c1;//c2=c1.operator++()
	c1.display();
	c2.display();
	
	complex c3(4, 5);
	complex c4 = --c3;
	c3.display();
	c4.display();


}

*/
// Assigment operator = 
/*
#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char* ptr;
	public:
		void display();
		string1(char*);
		string1& operator=(string1&);
		string1(string1&)
		{
			cout<<"copy constructor is called";
		}
		
};
string1& string1::operator=(string1& s)
{
	cout<<"assignment is called\n";
	len=s.len;
	delete[] ptr;
	ptr=new char[len+1];
	strcpy(ptr,s.ptr);
	return (*this);
}
void string1::display()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}
string1::string1(char * sptr)
{
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}	

int main()
{


	string1 s1("abc");
	string1 s2("xyz");
	s2=s1;//s2.operator=(s1)
	s2.display();
	

}
*/



//insertion and extraction operator 
/*
class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)
    {  real = r;   imag = i; }
    friend void operator << (ostream &out, const Complex &c);
    friend void operator >> (istream &in,  Complex &c);
};
 
void operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out  <<"+"<< c.imag <<"i"<< endl;
   
}
 
void operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    
}
 
int main()
{
   Complex c1;
   cin >> c1;//
   cout << "The complex object is ";
   cout << c1;
   return 0;
}
*/


/* Date code using insertion and extraction 

#include<iostream>
using namespace std;
class Date1
{
      int day;
      int month;
      int year;
      public:
             Date1(int d,int m,int y)
             {
                   day=d;
                   month=m;
                   year=y;
             }
             
             friend void operator-(Date1 &,int);
             friend void operator+(Date1 &,int);
             void display()
             {
                  cout<<"Date:"<<day<<"-"<<month<<"-"<<year<<endl;
             }
};
void operator-(Date1 &x, int y)
{
     x.day= x.day-y;
    x.month=x.month-3;
x.year=x.year-6;
 cout<<"Date:"<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
}
void  operator+(Date1 &x,int y)
{
     x.day= x.day+y;
    x.month=x.month+3;
x.year=x.year+6;
 cout<<"Date:"<<x.day<<"/"<<x.month<<"/"<<x.year<<endl;
}
int main()
{
    int dd,mm,yy;
    cout<<"Enter Day:";
    cin>>dd;
    cout<<"Enter Month:";
    cin>>mm;
    cout<<"Enter Year:";
    cin>>yy;
    
    Date1 d1(dd,mm,yy);
    d1-1;//d1=d1.operator-(1)
   	d1+2;
   
    return 0;
}
*/
