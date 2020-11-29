#include "my.h"
#include "std_lib_facilities.h"

void print_foo()
{
	cout << foo << "\n";
}

void print(int i)
{
	cout << i << "\n";
}
void swap_v(int a, int b)
{

	cout <<a <<" "<<b <<endl;
	int temp;
	temp = a; 
	a=b;
	b=temp;
	cout<<a<<" "<<b<<endl;

}
void swap_r(int& a, int& b)
{

	cout<<a<<" "<<b<<endl;
	int temp;
	temp = a; 
	a=b;
	b=temp;
	cout<<a<<" "<<b<<endl;

}
void swap_cr(const int& a,  const int& b)
{

}

