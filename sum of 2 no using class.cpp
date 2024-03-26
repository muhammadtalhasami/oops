#include<iostream>
using namespace std;

class Myclass
{
	private:
	int a,b,c;	
	
	public:
	void get_data()
	{
		cout<<"enter the value of a and b:"<<endl;
		cin>>a>>b;
		c=a+b;
	}
	void display()
	{
		cout<<"the output of a and b is: "<<c<<endl;
	}
};


int main()
{
	Myclass a;
	a.get_data();
	a.display();
	
	cout<<endl;
	a.get_data();
	a.display();
	
	cout<<endl;
	a.get_data();
	a.display();
}
