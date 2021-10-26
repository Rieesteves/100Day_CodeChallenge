#include <iostream>
#include<conio.h>
using namespace std;

class person
{
  private:char name[30], address[100], tel[10];

public:
  void getdata ()
  {
    cout << "\n Enter Name:";
    cin >> name;
    cout << "Enter Address:";
    cin >> address;
    cout << "Enter Telephone No:";
    cin >> tel;
  }
  void printdata ()
  {
    cout << name << endl;
    cout << address << endl;
    cout << tel << endl;
  }
};
//26 oct cppl codes
int
main ()
{
  int i, n;
  person o[i];
  cout << "Enter number of persons:";
  cin >> n;
  for (i = 0; i < n; i++)
    {
      o[i].getdata ();
      o[i].printdata ();
    }

}
