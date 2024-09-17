//Constructor: A constructor is a special member function of a class and shares the same name
//as of class, which means the constructor and class have the same name. Constructor is called by
//the compiler whenever the object of the class is created, it allocates the memory to the object
//and initializes class data members by default values or values passed by the user while creating
//an object. Constructors don’t have any return type because their work is to just create and
//initialize an object.
//Types of Constructors
//1. Default Constructors
//2. Parameterized Constructors

//1. Default Constructor: A constructor which does not receive any parameters is called a Default
//Constructor or a Zero Argument Constructor.

//2. Parameterized Constructor: Using the default constructor, it is impossible to initialize
//different objects with different initial values. What if we need to pass arguments to constructors
//which are needed to initialize an object? There is a different type of constructor called
//Parameterized Constructor to solve this issue. A Parameterized Constructor is a constructor that
//can accept one or more arguments

#include<iostream>
using namespace std;

class A
{
private:
int number;
public:
	//default constructor
A():number(0)
{}
	//parameterized constructor
A(int n):number(n)
{}
void display()
{
cout<<"the number is: "<<number<<endl;	
}	
};
int main()
{
	A obj1,obj2(4);
	obj1.display();
	obj2.display();
}








