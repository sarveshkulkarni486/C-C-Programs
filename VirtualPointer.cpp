#include<iostream>
using namespace std;
/* all cases of virtual pointer with object on stack without virtual, with object on heap withtout virtual with  
class employee {
	int id;
	public:
		employee();
		employee(int);
		virtual void display();
		virtual int findsalary() {
			return 0;
		}
};
employee::employee() {
	cout<<"In default of employee class\n";
	id = 0;
}
employee::employee(int i){
	cout<<"In para constructor of employeee class\n";
	id = i;
}
void employee::display() {
	cout<<"Id of employee: "<<id<<endl;
}

class wageemployee: public employee {
	int hrs, rate;
	public:
		wageemployee();
		wageemployee(int, int, int);
		void display();
		int findsalary();
};
wageemployee::wageemployee(){
	cout<<"in default of wageemployee \n";
	hrs = 0;
	rate = 0;
}
wageemployee::wageemployee(int i, int h, int r) : employee(i) {
	cout<<"In para constructor of wageemployee \n";
	hrs = h;
	rate = r;
}
int wageemployee::findsalary()
{
	return hrs * rate;
}
void wageemployee::display() {
	employee::display();
	cout<<"Hours: "<<hrs<<endl;
	cout<<"rate: "<<rate<<endl;
	cout<<findsalary()<<endl;
}
int main() {
	employee* ptr = new wageemployee(101, 5, 100);
	ptr->findsalary();
	ptr->display();
}
*/

/* hybrid class example */

#include <iostream>
using namespace std;

class Shape {
    protected:
        float area;
    public:
        Shape();
        Shape(float);
};

Shape::Shape() {
    cout << "In default constructor of Shape" << endl;
    area = 0;
}

Shape::Shape(float a) {
    cout << "In parameterized constructor of Shape" << endl;
    area = a;
    cout<<"Area = " <<area<<endl;
}
class Circle : virtual public Shape {
    float radius;
    const float pie = 3.14f; 
    public:
        Circle();
        Circle(float, float); 
};

Circle::Circle() {
    cout << "In default constructor of Circle" << endl;
    radius = 0;
}

Circle::Circle(float a, float r) : Shape(a) {
    cout << "In parameterized constructor of Circle" << endl;
    radius = r;
    int areaofCircle = pie * (radius * radius);
    cout<<"Area of circle is: "<<areaofCircle<<endl;
}



class Rectangle : virtual public Shape {
    float length;
    float breadth;
    public:
        Rectangle();
        Rectangle(float, float, float);
};

Rectangle::Rectangle() {
    cout << "In default constructor of Rectangle" << endl;
    length = 0;
    breadth = 0;
}

Rectangle::Rectangle(float a, float l, float b) : Shape(a) {
    cout << "In parameterized constructor of Rectangle" << endl;
    length = l;
    breadth = b;
    cout<<"Area of Rectangle is: "<<length*breadth<<endl;
}

class Triangle : public Circle, public Rectangle {
    float base;
    float height;
    const float half = 0.5f; // Using float for precision
    public:
        Triangle();
        Triangle(float, float, float, float, float, float);
};

Triangle::Triangle() {
    cout << "In default constructor of Triangle" << endl;
    base = 0;
    height = 0;
}

Triangle::Triangle(float r, float l, float b, float btr, float h, float a) : Circle(0, r), Rectangle(0, l, b), Shape(a) {
    cout << "In parameterized constructor of Triangle" << endl;
    base = btr;
    height = h;
    cout<<"Area of trianlge is: "<<half * base * height<<endl;
}
int main() {
    float rad;
    float reclen;
    float recbred;
    float tribase;
    float hei;
    float a;
    cout << "Enter radius of circle: " << endl;
    cin >> rad;
    cout << "Enter rectangle length and breadth: " << endl;
    cin >> reclen >> recbred;
    cout << "Enter triangle base and height: " << endl;
    cin >> tribase >> hei;

    Triangle tri(rad, reclen, recbred, tribase, hei, a);

    return 0;
}

