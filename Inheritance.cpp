#include<iostream>
using namespace std;
/* class Shape {
	public:
		int radius;
		int length;
		int breadth;
		virtual void area()=0;
};
class Circle : public Shape{
	public:
		void    () {
			cout<<"Enter radius of circle: "<<endl;
			cin>>radius;
		}
		void area() {
			cout<<((22/7)*radius*radius)<<endl;
		}
};
class Rectangle: public Shape {
	public:
		void accept(){
			cout<<"Enter length of rectangle: "<<endl;
			cin>>length;
			cout<<"Enter breadth of rectangle: "<<endl;
			cin>>breadth;
		}
		void area() {
			cout<<length*breadth<<endl;
		}
};
int main (){
	Shape *ptr;
	Rectangle r;
	Circle c;
	ptr = &r;
	r.accept();
	ptr->area();
	ptr = &c;
	c.accept();
	ptr->area();
}
*/


class Bank {
	float balance;
	float transfer_amount;
	float deposit_amount;
	int acc_num;
	public:
		Bank(float balance);
		virtual float checkBalance()=0;		
};
Bank::Bank(float b){
	cout<<"Enter account number: "<<endl;
	cin>>acc_num;
}
class Transfer_Money{
	Bank b;
	public:
		checkbalance(){
			cout<<"balance is: " b.Bank(); 
		}
}

