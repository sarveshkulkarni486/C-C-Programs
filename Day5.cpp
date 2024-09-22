 /*(#include<iostream>

using namespace std;



class real

{

	int a=4;

public:

	int b=8; 

protected :

	int c=12;

	void display(){

		cout<<c;

	}

public:

	void show(){

		cout<<b<<" "<<c;

	}

	

};

int main(){

	

	real obj;

	obj.b;

	obj.show();

	

} */

/*

#include <iostream>

using namespace std;

 class Parent

{   

    protected:

    int A;

  };

class Child : public Parent

{

    public:

    void set(int id)

    { 

        

             A = id;

      }

       void displayId()

    {

        cout << "A is: " << A << endl;

    }

};

 int main() {

     

    Child obj1;

    //obj1.A;// it gives the error

  

  obj1.set(81);

    obj1.displayId();



} */

/*

#include <iostream>

using namespace std;

class real

{

	int p;

	

	protected:

		int s=56;

		

};



class child: public real

{

	public:

		void show(){

			cout<<s;

		}

};



int main(){

	child obj;

	//obj.s; //error s is protected

	obj.show();

} */

/*

#include <iostream>

using namespace std;

class real {

protected:

    int id=3;

    int p =7;

};

class img : public real {

public:

    int id_a;

    void display()

    {

    	cout<<id;

	}

};

 int main()

{

    img obj1;

    obj1.id_a = 5;

    obj1.display();

    cout << "Child id is: " << obj1.id_a << '\n';

   // cout << "Parent id is: " << obj1.id << '\n';

    cout<<sizeof(obj1);

} */

/*

#include <iostream>

using namespace std;



class real 

{

	int p;

protected:

    int s=8;

public:

	int q=7;

   	void display(){

   	cout<<s;

   }	

};



class img : public real

{

	public:

		int w=5;

		

};



int main(){

	img obj;

	obj.display();

	cout<<obj.q;

	cout<<obj.w;

	

}

*/

/*

#include <iostream> 

using namespace std; 

 

class Base { 

private: 

    int pvt = 1; 

 protected: 

    int prot = 2; 

 public: 

    int pub = 3; 

    int getPVT() { return pvt; } 

}; 

  

class pro : protected Base { 

protected: 

 int q=5;

    int getProt() { return prot; } 

    int getPub() { return pub; } 

    

    

    

    

}; 



class img: public pro

{

	public:

		int show(){

			cout<< q;

		}

	

};



  

int main() 

{ 

    img obj; 

    //cout << "Protected = " << obj.getProt() << endl; 

    //cout << "Public = " << obj.getPub() << endl; 

    //cout<<obj.q;

    //obj.pub;//error because pub is in parent class

   obj.show();

    

    return 0; 

}*/

/*

#include <iostream> 

using namespace std; 

class real { 

private: 

    int pvt = 1; 



protected: 

    int prot = 2; 

  

public: 

    int pub = 3; 

  

     

    int getPVT() 

	{

	   return pvt; 

	} 

}; 

  

class pvt : private real { 

public: 

	

    int getProt() { 

	    return prot; 

	} 

     int getPub() {

	   return pub; 

	}

	  

}; 



class img : private pvt { 

public: 

    

     int getPub() {

	   return pub; 

	}

	  

}; 

  

  

int main() 

{ 

     obj1;  

   cout << "Protected = " << obj1.getProt() << endl; 

    cout << "Public = " << obj1.getPub() << endl; 



 

}

*/



/*#include<iostream>

using namespace std;

class A

{

	int c;

public:

	int a;

protected:

	int b;

public:

	void display()

	{

		cout<<"in display of A\n";

	}

//protected:

//void profun()

//{

//cout<<"in pro\n";

//}



};

class B:public A

{

public:

		public:

	void show()

	{

	    display();

		cout<<a<<b;

	}

	

};

class C:public B

{

	public:

	void show()

	{

		cout<< a<<b;

			}

};

int main()

{

	B bobj;

	bobj.show();

	bobj.display();

    //bobj.profun();//not called in class b

}*/



#include<iostream>

using namespace std;

class real

{

    int p;

public:

	int q;

protected:

	int r;

	void display()

	{

		cout<<" display  real"<<"\n";

	}



};

class img:protected real

{

public:

	int p;

	public:

	void show()

	{

		cout<<q<<r;

	

	}



};



int main()

{

    img bobj;

    bobj.show();

}
