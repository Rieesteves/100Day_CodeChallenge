//Q3.B) Single inheritance
#include <iostream>
using namespace std;

class Train { //base class
public:
	Train()
	{
	cout << "This is a Train Reservation" << endl;
	}
};

// sub class derived from a single base classes
class TYpe: public Train{

};

// main function
int main()
{
	
	TYpe obj;
	return 0;
}
