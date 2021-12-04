// Friend function
#include<iostream>
using namespace std;

class Bank{
	int custID;
	float balance;
	
	public:
	Bank(){
		custID=0;
		balance=0;
	}
	
	
	void displayDetails(){
		cout<<"Customer ID is ="<<custID<<endl<<"Account Balance ="<<balance<<endl; 
	}
	
	friend void insertDetails(Bank &obj);
	
};
void insertDetails(Bank &obj){
		obj.custID=5;
		obj.balance=10000;
}

int main(){
	Bank obj;
	obj.displayDetails();
	insertDetails(obj);
	obj.displayDetails();
	return 0;
}




// Friend class
#include <iostream>
class A {
private:
	int a;

public:
	A() { a = 10; }
	friend class B; // Friend Class
};

class B {
private:
	int b;

public:
	void showA (A &x)
	{
		// Since B is friend of A, it can access
		// private members of A
		std::cout << "A::a=" << x.a;
	}
};

int main1()
{
	A a;
	B b;
	b.showA(a);
	return 0;
}
