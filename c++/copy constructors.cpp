//3. Copy Constructors
///* A Copy constructor in C++ is a type of constructor used to create a copy*/
//of an already existing object of a class type. The compiler provides a default Copy Constructor to
//all the classes. A copy constructor comes into the picture whenever there is a need for an object
//with the same values for data members as an already existing object. A copy constructor is invoked
//when an existing object is passed as a parameter.
//class A
//{
//A(A &x) // copy constructor.
//{
// copyconstructor.
//}
//}

#include<iostream>
using namespace std;

class Myclass
{
private:
	int data;
public:
	Myclass(int d):data(d){}
//copy constructor
	Myclass(Myclass &other):data(other.data){}
	
	int display()
	{
		return data;
	}
};

int main()
{
	Myclass obj1(5);
	//using copy contructor to create another object
	Myclass obj2 = obj1;
	
	cout<<"the data of obj1:"<<obj1.display()<<endl;
	cout<<"the data of obj2:"<<obj2.display()<<endl;
	
}
//In this example, MyClass is a simple class with a single member variable data.
// We define a copy constructor MyClass(MyClass& other) that takes a reference to another 
// MyClass object and copies its data member into the new object being constructed. This allows us 
// to create a new object (obj2) that is a copy of an existing object (obj1).







