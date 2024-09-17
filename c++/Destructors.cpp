//Destructors: A destructor is a member function that is invoked automatically when the object
//goes out of scope or is explicitly destroyed by a call to delete. A destructor has the same name as
//the class, preceded by a tilde (~). For example, the destructor for class String is declared: ~String().
//Class Name_of _class {
//public:
//~Name_of_class() //this is known as Destructor
//{
//}
//}
#include<iostream>
using namespace std;

class A
{
private:	
int number;

public:
	//default constructor
	A():number(0){}	
	
	void display()
	{
		cout<<"the number is:"<<number<<endl;
	}
	//destructor
	
	~A()
	{
		cout<<"destructor called "<<endl;
	}

};

int main()
{
	A obj1;
	obj1.display();
}

