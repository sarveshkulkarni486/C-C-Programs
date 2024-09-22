/* Friend function */
#include<iostream>
using namespace std;
 class Base {
	private:
		int a;
	protected:
		int b;
	public:
		Base() {
			a = 10;
			b = 20;
		}
	friend class Sub;
};
class Sub {
	public:
		void show(Base& bobj) {
			cout<<"Value of a: "<<bobj.a<<endl;
			cout<<"Value of b: "<<bobj.b<<endl;
		}
};
int main() {
	Base bo;
	Sub sb;
	sb.show(bo);
	return 0;
}

/* implementing static, virtual, friend while declaration and definition or while definition without while declaration */
/*
class Demo{
	private:
		int a;
	protected:
		int b;
	public:
		void display() {
			static int count=0;
			cout<<count<<" ";
			count++;
		}
		Demo() {
			a = 10;
			b = 20;
		}
	friend void friendfunction(Demo&);
};
void friendfunction(Demo& dobj){
	cout<<"Value of a: "<<dobj.a<<endl;
	cout<<"Value of b: "<<dobj.b<<endl;
}

int main() {
	Demo d;
	Demo d2;
	friendfunction(d);
	for(int i=0; i<=5; i++){
		d2.display();
	}
	return 0;
}
*/

