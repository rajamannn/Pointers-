// Program to print the pointers in C++
#include <iostream>
using namespace std;

void views()
{
  int var =20;

  int* ptr;
  ptr =&var;

 cout << "Value at ptr = " << ptr << "\n";
 cout << "Value at var = " << var << "\n";
 cout << "Value at *ptr = " << *ptr << "\n";
}
  int main()
{
  views();
 return 0;
}
