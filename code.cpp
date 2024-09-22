#include<iostream>
using namespace std;
class Student //Student is a class name
{
	
	public : //access sepcifier

		int sno;
		string sname;
		float avg; 
		// above three are data members
		
		Student() //default constructor
		{
			
		}
		
		Student(int sno,string sname, float ave) //parameterized constructor
		{
			this->sno=sno;
			this->sname=sname;
			this->avg=avg;
		}
		//this is the member functions
		void get()
		{
			cout<<"enter student no = ";
			cin>>sno;
			cout<<"enter sudent name = ";
			cin>>sname;
			cout<<"enter student ave of maks = ";
			cin>>avg;
		}
		
		void display()
		{
			cout<<"student no = "<<sno<<endl;
			cout<<"student name = "<<sname<<endl;
			cout<<"student ave of marks = "<<avg;
		}
    }; //class function end's here
		int main()
		{
			Student s1; //s1 is the object of student class which will invoke student constructors initialize data members
			s1.get(); //function is call with the help of object
			s1.display();
			
			Student s2;
			s2.get();
			s2.display();
			
			return 0;
		}
		
	    

