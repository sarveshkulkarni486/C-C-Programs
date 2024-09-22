//FAQ 1

/*
#include<iostream> 
   
using namespace std; 
class Base1 { 
 public: 
     Base1() 
     { cout << " Base1's constructor called" << endl;  } 
}; 
   
class Base2 { 
 public: 
     Base2() 
     { cout << "Base2's constructor called" << endl;  } 
}; 
   
class Derived: public Base1, public Base2 { 
   public: 
     Derived() 
     {  cout << "Derived's constructor called" << endl;  } 
}; 
   
int main() 
{ 
   Derived d; 
   return 0; 
} 
/*(A) Compiler Dependent


(B) Base1's constructor called
Base2's constructor called
Derived’s constructor called


(C) Base2's constructor called
Base1's constructor called
Derived’s constructor called


(D) Compiler Error */
/*
//FAQ 2

#include <iostream>   
using namespace std; 
  
class Base1 { 
 public: 
     ~Base1()  { cout << " Base1's destructor" << endl; } 
}; 
    
class Base2 { 
 public: 
     ~Base2()  { cout << " Base2's destructor" << endl; } 
}; 
    
class Derived: public Base2, public Base1 { 
   public: 
     ~Derived()  { cout << " Derived's destructor" << endl; } 
}; 
    
int main() 
{ 
   Derived d; 
   return 0; 
} */

//FAQ 3

/*
#include<iostream> 
   
using namespace std; 
class P { 
public: 
   void print()  { cout <<" Inside P"; } 
}; 
   
class Q : public P { 
public: 
   void print() { cout <<" Inside Q"; } 
}; 
   
class R: public P { }; 
   
int main(void) 
{ 
  R r;  
  r.print(); 
  return 0; 
} 

*/

//Exercise 1

/*
#include<iostream>
using namespace std;
class Complex {
	int real, img;
	public: static const int cnt;
	private: static const int cnt1;
	public:
		Complex() {
			cout<<"Default constructor\n";
			real = 5;
			img = 10;
			//cnt++; not allowed;
		}
		static int getcnt() {
			return cnt1;
		}
};
const int Complex::cnt=5;
const int Complex::cnt1=10;
int main() {
	Complex c1;
	cout<<"no of cnt1: "<<Complex::getcnt()<<endl;
	cout<<"Size of object: "<<sizeof(c1)<<endl;
	cout<<"Count: "<<Complex::cnt<<endl;

}
*/
//Exercise 2
/*
#include <iostream>
using namespace std;

class Test
{
	static int x;
public:
	Test() { x++; }
	static int getX() {return x;}
};
int Test::x;
int main()
{
	cout << Test::getX() << " ";
}  */

//Exercise 3
/*
#include <iostream>
using namespace std;
class Player{
	int id;
	static int next_id;
	public:
		int getID()
		{
		return id;
		}
		Player(){
			
			id=next_id++;
		}
};
int Player :: next_id=1;

int main(){
	
	Player p1;
	Player p2;
	Player p3;
	cout<<p1.getID()<<" ";
	cout<<p2.getID()<<" ";
	cout<<p3.getID();
	return 0;
} */ 
//Exercise 5 & 6
/*
#include <iostream>
using namespace std;

class demo{
	public:
		demo(){
		    cout<<" constructor called"<<endl;
		}
};

int main(){
	demo p, *p1;
	return 0;
}
*/
//Exercise 7
/*
#include<iostream> 

using namespace std; 
#include<stdlib.h> 
 class Test 
{ 
public: 
   Test() 
   { cout << "Constructor called"; } 
}; 
 int main() 
{ 
    Test *t = (Test* ) malloc(sizeof(Test));
    return 0; 
}
*/


// Exercise 8

/*
#include<iostream>
using namespace std;
class temp
{
	int z;
	static int y;
public:
	temp();
	void show();
	void display();
};
int x;
int temp::y;
void temp::show()
{
	++y;
	cout<<y<<endl;
}
temp::temp()
{
	int z=200;
	x=100;
	cout<<"value of z is "<<z<<endl;
}
void temp::display()
{
	cout<<"value of x is "<<x<<endl;
	cout<<"value of y is  "<<y<<endl;
}
int main()
{
	temp t; //z=200;
	t.show();//y=1;
	t.show();//y=2;
	t.display();//x=100 & y=2;
	cout<<sizeof(t);//4 
} */
//Exercise 8
/*
#include<iostream>
using namespace std;
class item
{
public:
	static int x;
	int number;
public:
	void getdata(int a)
	{
		number=a;
		number++; //101
		x++; //11
	}
	void getcount()
	{
		x=10;
		cout<<"value is "<<x<<endl;
	}
	void getcount_1()
	{
		x++;
		cout<<"value is  "<<number<<endl;
		cout<<"value is "<<x<<endl;
	}
};
int number=9;
int item::x;
int main()
{
	item a;
	a.getcount(); //10
	a.getdata(100);
	a.getcount_1(); //101, 12
	cout<<number<<endl; //9
	cout<<a.number; //101
} */

/* Given an array arr[] of n integers and a target value, the task is to find whether 
there is a pair of elements in the array whose sum is equal to target.*/
/*
#include<iostream>
using namespace std;
int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int target = 8;
	for(int i=0; i<=5; i++){
		for(int j=i+1; j<=5; j++){
			if((arr[i]+arr[j])==target) {
				cout<<"founded"<<endl;
			}
			return true;
		}
		return false;
	}
} */

/* Given an array prices[] of length N, representing the prices of the stocks on different days,
 the task is to find the maximum profit possible by buying and selling the stocks on different 
 days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell.

Note: Stock must be bought before being sold.*/
